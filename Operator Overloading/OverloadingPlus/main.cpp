#include <iostream>
#include "Complex.h"

using namespace std;
int main(int argc, char **argv) {
    Complex c1(2,4);
    cout << c1;
    cout << (c1 + c1 + c1);
    Complex c4(4,5);
    
    Complex c5 = c4 + 2.3;
    
    cout << c5;
    cout << c5 + 2.1;
    return 0;
}
