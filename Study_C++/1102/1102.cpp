//
//  1102.cpp
//  Study_C++
//
//  Created by 강인혜 on 2022/09/28.
//

//c1 = 3-4i
//c2 = 6-9i
#include <iostream>
using namespace std;

class Complex102 {
    double real;
    double imag;
public:
    Complex102() {
        real = imag = 0.;
    }
    Complex102(double re, double im) {
        real = re;
        imag = im;
    }
    void showme();
    Complex102 operator + (Complex102& c);
    Complex102 operator - (Complex102& c);
    Complex102 operator * (Complex102& c);
    Complex102 operator / (Complex102& c);
};

void Complex102::showme() {
    cout << "( " << real << ", " << imag << "i )\n";
}

Complex102 Complex102:: operator + (Complex102& c) {
    Complex102 result(real + c.real, imag + c.imag);
    return result;
}

Complex102 Complex102:: operator-(Complex102& c) {
    Complex102 result(real - c.real, imag - c.imag);
    return result;
}

Complex102 Complex102:: operator * (Complex102& c) {
    Complex102 result(real * c.real - imag * c.imag, imag * c.real + real * c.imag);
    return result;
}

Complex102 Complex102:: operator / (Complex102& c) {
    double mo = c.real * c.real + c.imag * c.imag;
    Complex102 result(real / mo, imag /mo);
    Complex102 conju(c.real, -c.imag);
    return result.operator * (conju);
}

int main()
{
    Complex102 result;
    Complex102 c1(3, -4);
    Complex102 c2(6, -9);
    
    cout << "c1 = ";
    c1.showme();
    
    cout << "c2 = ";
    c2.showme();
    
    result = c1 + c2;
    cout << "c1 + c2 = ";
    result.showme();
    
    result = c1 - c2;
    cout << "c1 - c2 = ";
    result.showme();
    
    result = c1 * c2;
    cout << "c1 * c2 = ";
    result.showme();
    
    result = c1 / c2;
    cout << "c1 / c2 = ";
    result.showme();
}
