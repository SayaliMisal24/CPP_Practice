#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int i,int r) {
        real = r; imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 1);
    Complex c3;
    Complex c4;
    c3= c1 + c2;
    c4= c1 - c2;

    cout << "Addition: ";
    c3.display();
    cout << "Subtraction: ";
    c4.display();
    return 0;
}
