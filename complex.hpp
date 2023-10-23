#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED

#include <iostream>

class Complex {
  private:
    double real;
    double im;
  public:
    Complex();
    Complex(double, double);
    Complex(const Complex&);

    double getReal() const;
    double getIm() const;

    void setReal(double);
    void setIm(double);

    Complex& operator=(const Complex&);
    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);
    Complex& operator++();
    Complex operator++(int);

    friend Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
    friend bool operator==(const Complex&, const Complex&);
    friend bool operator!=(const Complex&, const Complex&);
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);
};


#endif // COMPLEX_HPP_INCLUDED
