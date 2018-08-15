#include <iostream>
using namespace std;

void test(){
    cout << "Hello" << endl;
}
void test2(){
    cout << "hi\n";
}
int main(int argc, char **argv) {
    auto a = test;
    
    //A pointer to a void function that takes no parameters
    void (*pTest)();
    pTest = test;
    
    pTest();
    pTest = test2;
    pTest();
    return 0;
}
