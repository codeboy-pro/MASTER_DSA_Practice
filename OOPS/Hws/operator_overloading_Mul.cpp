#include<iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload * operator
    Complex operator * (const Complex& obj) {
        Complex result;
        result.real = (real * obj.real) - (imag * obj.imag);
        result.imag = (real * obj.imag) + (imag * obj.real);
        return result;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);
    Complex result = c1 * c2;  // Multiplying complex numbers using overloaded *

    cout << "Result: ";
    result.display();  // Output will be in complex number format

    return 0;
}
