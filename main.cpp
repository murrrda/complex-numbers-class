#include "complex.hpp"

Complex operator+(const Complex&, const Complex&);
Complex operator-(const Complex&, const Complex&);
Complex operator*(const Complex&, const Complex&);
Complex operator/(const Complex&, const Complex&);
bool operator==(const Complex&, const Complex&);
bool operator!=(const Complex&, const Complex&);
std::ostream& operator<<(std::ostream&, const Complex&);
std::istream& operator>>(std::istream&, Complex&);

int main()
{
    Complex complex_number(2, 5);
    std::cout << complex_number << '\n';

    std::cin >> complex_number;

    std::cout << '\n' <<complex_number;

    return 0;
}

Complex operator+(const Complex& z1, const Complex& z2) {
    Complex w(z1.real + z2.getReal(), z1.im + z2.getIm());

    return w;
}
Complex operator-(const Complex& z1, const Complex& z2) {
    Complex w(z1.real - z2.getReal(), z1.im - z2.getIm());

    return w;
}
Complex operator*(const Complex& z1, const Complex& z2) {
    Complex w(z1.real * z2.real - z1.im * z2.im,
    z1.im * z2.real + z1.real * z2.im);

    return w;
}
Complex operator/(const Complex& z1, const Complex& z2) {
    double d = z2.real * z2.real + z2.im * z2.im;
    Complex w((z1.real * z2.real + z1.im * z2.im) / d,
    (z1.im * z2.real - z1.real * z2.im) / d);

    return w;
}
bool operator==(const Complex& z1, const Complex& z2) {
    if(z1.real == z2.real && z1.im == z2.im) {
        return true;
    }
    else
        return false;
}
bool operator!=(const Complex& z1, const Complex& z2) {
    if(z1.real != z2.real && z1.im != z2.im) {
        return true;
    }
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Complex& z) {
    if( z.im == 0)
        out << z.real;
    if( z.real == 0 && z.im != 0)
        out << z.im << "i";
    if( z.real != 0 && z.im > 0)
        out << z.real << "+" << z.im << "i";
    if( z.real != 0 && z.im < 0)
        out << z.real << z.im << "i";

    return out;
}
std::istream& operator>>(std::istream &in, Complex &z){
  in >> z.real >> z.im;

  return in;
}
