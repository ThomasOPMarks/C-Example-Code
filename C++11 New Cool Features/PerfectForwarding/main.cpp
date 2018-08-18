#include <iostream>
using namespace std;

class Test {
    
};

void check(Test& test){
    cout << "Lvalue" << endl;
}
void check(Test&& test){
    cout << "Rvalue" << endl;
}

template<typename T>
//The T&& can be infered to be an L value reference or an R value reference 
void call (T&& arg){
    //If one passes in an lvalue reference collaping ends up with an l value
    //r is passed properly
    check(static_cast<T>( arg));
    //This does it easier
    check(forward<T>(arg));
}

int main(int argc, char **argv) {
    Test test;
    //That is an expected R value
    auto&& t = Test();
    
    //this seems odd, will collapse it to an l value but still have the same type... so it will seem odd which one is called
    auto&& t2 = test;
    
    //passing in an R value, but will call the l version without perfect forwarding (doing a static cast to the type)
    call(Test());
    
    //this will also call the l value version
    call(test);
    
    return 0;
}
