#include <iostream>
using namespace std;

class Parent{
    int dogs{5};
    string test{"hello"};
    
public:
    //a constructor can call another constructor
    Parent(): Parent("hello"){
        dogs = 5;
        cout << "no parameters" <<endl;
    }
    Parent(string text){
        dogs = 5;
        test = text;
        cout << "string parent constructor" << endl;
    }
};

class Child : public Parent{
public:
    //specify which constructor to call (default is the empty one)
    Child() = default;
};

int main(int argc, char **argv) {
    Parent parent ("yep");
    Child child;
    
    return 0;
}
