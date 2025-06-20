#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
Complex Complex::add(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
void Complex::Print()
{
    cout << Real << " + ";
    cout << Imaginary << "i" << endl;
}