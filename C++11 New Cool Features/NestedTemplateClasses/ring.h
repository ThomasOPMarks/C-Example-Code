

#ifndef RING_H
#define RING_H
#include <iostream>
using namespace std;
/**
 * @todo write docs
 */
template<typename T>
class ring
{
private:
    T* data;
    unsigned int m_size;
    unsigned int location;
public:
    /**
     * Default constructor
     */
    ring(int size): m_size(size), location(0){
        data = new T[size];
    }

    /**
     * Destructor
     */
    ~ring(){
        delete [] data;
    }
    T& get(int i){
        return data[i];
    }
    void add(T val){
        //using value, then incrimenting
        data[location++] = val;
        
        if(location == m_size){
            location = 0;
        }
    }
    unsigned int size(){return m_size;}
    class iterator;
    iterator begin(){
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
    }
    
};

template<typename T>
class ring<T>::iterator{
private:
    int m_pos;
    ring& m_ring;
    
public:
    iterator(unsigned int pos, ring& aring): m_pos(pos), m_ring(aring){
            
    }
    //prefix takes nothing, post fix takes a useless int 
    iterator& operator++(int) {
        m_pos++;
    }
    iterator& operator++() {
        m_pos++;
    }
    T& operator*() {
        return m_ring.get(m_pos);
    }
    
    bool operator!=(const iterator& other) const {
        return m_pos != other.m_pos;
    }
};


#endif // RING_H
