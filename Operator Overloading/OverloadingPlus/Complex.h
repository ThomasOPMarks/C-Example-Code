

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
/**
 * @todo write docs
 */
using namespace std;


class Complex
{
public:
    /**
     * Default constructor
     */
    Complex();
    Complex(double real, double img);
    Complex(const Complex& other);
    const Complex& operator=(const Complex& other);
    
    double  getReal() const {return real;}
    double  getImaginary() const {return imaginary;}

private:
    double imaginary;
    double real;
};

ostream& operator<<(ostream& out, const Complex& c);
Complex operator+(const Complex& c1, const Complex& c2);
Complex operator+(const Complex& c1, double d);
#endif // COMPLEX_H
