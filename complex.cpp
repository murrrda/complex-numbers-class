#include "complex.hpp"

Complex::Complex() {
    real = 0;
    im = 0;
}
Complex::Complex(double x, double y) {
    real = x;
    im = y;
}
Complex::Complex(const Complex& broj) {
    real = broj.real;
    im = broj.im;
}

double Complex::getReal() const {
    return real;
}
double Complex::getIm() const {
    return im;
}

void Complex::setReal(double x) {
    real = x;
}
void Complex::setIm(double x) {
    im = x;
}

Complex& Complex::operator=(const Complex& broj) {
    real = broj.real;
    im = broj.im;

    return *this;
}
Complex& Complex::operator+=(const Complex& broj) {
    real += broj.real;
    im += broj.im;

    return *this;
}
Complex& Complex::operator-=(const Complex& broj) {
    real -= broj.real;
    im -= broj.im;

    return *this;
}
Complex& Complex::operator*=(const Complex& broj) {
    real = (real * broj.real - im * broj.im);
    im = (real * broj.im + im * broj.real);

    return *this;
}
Complex& Complex::operator/=(const Complex& z) {
    double r = real;
    double i = im;
    double d = z.real * z.real + z.im * z.im;
    real = (r * z.real + i * z.im) / d;
    im = (i * z.real - r * z.im) / d;

    return *this;
}
Complex& Complex::operator++() {
    real++;
    im++;

    return *this;
}
Complex Complex::operator++(int i) {
    Complex z(real, im);
    real++;
    im ++;

    return z;
}







