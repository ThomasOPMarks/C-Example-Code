/*
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is ______________________________________.
 *
 * The Initial Developer of the Original Code is ________________________.
 * Portions created by ______________________ are Copyright (C) ______
 * _______________________. All Rights Reserved.
 *
 * Contributor(s): ______________________________________.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the _____ license (the  "[___] License"), in which case the
 * provisions of [______] License are applicable instead of those
 * above.  If you wish to allow use of your version of this file only
 * under the terms of the [____] License and not to allow others to use
 * your version of this file under the MPL, indicate your decision by
 * deleting  the provisions above and replace  them with the notice and
 * other provisions required by the [___] License.  If you do not delete
 * the provisions above, a recipient may use your version of this file
 * under either the MPL or the [___] License."
 */

#include "Complex.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, const Complex& c){
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex operator+(const Complex& c1, const Complex& c2){
    return Complex(c1.getReal()+c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex& c1, double d){
    return Complex(c1.getReal()+ d, c1.getImaginary());
}

Complex::Complex() : imaginary(0.0), real(0.0) 
{

}

Complex::Complex(double real, double img) : imaginary(img), real(real){
    
}

Complex::Complex(const Complex& other)
{
    real = other.real;
    imaginary = other.imaginary;
}

const Complex & Complex::operator=(const Complex& other)
{
    this->real = other.real;
    this->imaginary = other.imaginary;
    return *this;
}







