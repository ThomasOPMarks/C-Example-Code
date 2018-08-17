#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test{
private:
    static const int SIZE=100;
    int* pBuffer{nullptr};
    
public:
    Test() {
        
        pBuffer = new int [SIZE];
        //Good initialize ways
        memset(pBuffer, 0, sizeof(int) * SIZE); // pointer, value to set to, how many bytes to set
        pBuffer = new int [SIZE]();
        pBuffer = new int [SIZE]{};
    }
    Test(const Test& other){
        
        pBuffer = new int[SIZE]{};
        
        memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int)); // copy that many bytes over
    }
    //MOVE CONSTRUCTOR
    Test(Test&& other){
        //Check to see if it is itself
        if(&other == this){
            return;
        }
        pBuffer = other.pBuffer;
        other.pBuffer = nullptr;
        cout << "move\n";
    }
    Test (int i) : pBuffer(0){
        
        delete[] pBuffer;
        pBuffer = new int [SIZE]{i};
    }
    Test& operator=(const Test& other){
        return *this;
    }
    ~Test() {
        delete[] pBuffer;
    }
    Test& operator=(Test&& other){
        if(&other == this){
            return other;
        }
        delete [] pBuffer;
        pBuffer = other.pBuffer;
        other.pBuffer = nullptr;
    }
    friend ostream& operator<<(ostream& out, const Test& test);
};

ostream& operator<<(ostream& out, const Test& test){
    out << "hello from test";
    return out;
}

Test getTest(){
    return Test();
}


//Elison is when the compiler removes unneeded copies 
//  Like get test would have returned a copy, then used the copy to make a copy, it just makes one
int main(int argc, char **argv) {
    Test test1 = getTest();
    
    cout << test1 << endl;
    vector<Test> vec;
    vec.push_back(Test());
    
    Test test = getTest();
    
    return 0;
}








