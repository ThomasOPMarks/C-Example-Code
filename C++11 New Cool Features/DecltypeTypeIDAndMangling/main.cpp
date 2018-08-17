#include <iostream>
#include <typeinfo>

using namespace std;


int main(int argc, char **argv) {
    int value;
    //i means an int, d for double
    cout << typeid(value).name() << endl;
    double value2;
    cout << typeid(value2).name() << endl;
    string value3;
    cout << typeid(value3).name() << endl;
    //decltype just declares a type as the same type from before
    decltype(value3) stringFromBefore;
    cout << typeid(stringFromBefore).name() << endl;
    return 0;
}
