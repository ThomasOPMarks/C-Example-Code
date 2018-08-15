#include <iostream>
using namespace std;

class Parent{
private:
    int one;
public:
    Parent() : one(0){
        
    }
    Parent(const Parent& other) : one(0){
        cout << "copy parent" << endl;
        one  = other.one;
    }
    //Can't override unless add virtual
    virtual void print(){
        cout << "parent" << endl;
    }
};

class Child: public Parent{
private:
    int two;
public:
    Child(): two(3){
        
    }
    void print(){
        cout << "child" << endl;
    }
};
int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    Child c1;
    Parent &p1 = c1;
    p1.print();
    
    //This invokes a copy constructor of the parent (so won't use child function)
    //  This is called slicing because it won't copy anything that's just in the child (upcasting)
    Parent p2 = Child();
    return 0;
}
