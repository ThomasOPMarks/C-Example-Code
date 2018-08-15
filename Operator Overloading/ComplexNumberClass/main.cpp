#include <iostream>
#include "Complex.h"


int main(int argc, char **argv) {
    Complex a(1,2);
    Complex b = a;
    a = b;
    std::cout << a << b;
    return 0;
}
