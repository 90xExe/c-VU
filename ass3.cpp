#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0, double i = 0) : real(r), imag(i) {}


    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
    }

    friend ostream& operator<<(ostream& os, const Complex& obj) {
        os << obj.real << " + " << obj.imag << "i";
        return os;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;

    Complex c4 = c1 * c2;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 * c2 = " << c4 << endl;

    return 0;
}

