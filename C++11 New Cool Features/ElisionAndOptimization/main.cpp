#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test{
private:
    static const int SIZE=100;
    int* pBuffer;
    
public:
    Test() {
        cout << "constructor" << endl;
        pBuffer = new int [SIZE];
        //Good initialize ways
        memset(pBuffer, 0, sizeof(int) * SIZE); // pointer, value to set to, how many bytes to set
        pBuffer = new int [SIZE]();
        pBuffer = new int [SIZE]{};
    }
    Test(const Test& other){
        cout << "copy constructor" << endl;
        pBuffer = new int[SIZE]{};
        
        memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int)); // copy that many bytes over
    }
    Test (int i) : pBuffer(0){
        cout << "paramters constructor" << endl;
        delete[] pBuffer;
        pBuffer = new int [SIZE]{i};
    }
    Test& operator=(const Test& other){
        cout << "assignment" << endl;
        return *this;
    }
    ~Test() {
        cout << "destructor" << endl;
        
        delete[] pBuffer;
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

void check(const Test& value){
    cout << "lValue function" << endl;
}

void check(Test&& value){
    cout << "rValue function" << endl;
}
//Elison is when the compiler removes unneeded copies 
//  Like get test would have returned a copy, then used the copy to make a copy, it just makes one
int main(int argc, char **argv) {
    Test test1 = getTest();
    
    cout << test1 << endl;
    
    //value1 is an L value, 7 is an R value, for right and left
    int value1 = 7;
    //c++11 an L value is a value you can take the address of
    Test* pTest1= &test1;
    //Can't do that with return values
    //Test* pTest2 = &getTest();
    int* p1 = &++value1;
    //can't do it with post fix's copy
    //int* p2 = &value++;
    
    vector<Test> vec;
    vec.push_back(Test());
//L value references
    Test& lref = test1;
    //Can't do that to the temp one
    //Test& lref2 = &getTest();
    //Can extend the life with the const keyword and make it work
    const Test& lref2 = getTest();
    //This means the copy constructor also can do this (because of the l references)
    Test test2(Test(2));
    
//R value references
    Test&& rref1 = getTest();
    
    check(lref);
    //but here are rValues
    check(getTest());
    check(Test());
    
    
    return 0;
}








