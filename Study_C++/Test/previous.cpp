//
//  previous.cpp
//  Study_C++
//
//  Created by 강인혜 on 2022/09/28.
//

//#include <iostream>
//using namespace std;
//
//class Complex {
//    double real;
//    double imag;
//public:
//    Complex() {
//        real = imag = 0.;
//    }
//    Complex(double re, double im) {
//        real = re;
//        imag = im;
//    }
//    void showme();
//    Complex operator + (Complex& c);
//    Complex operator - (Complex& c);
//    Complex operator * (Complex& c);
//    Complex operator / (Complex& c);
//};
//
//void Complex:: showme() {
//    cout << "(" << real << ", " << imag << "i )\n";
//}
//
//Complex Complex:: operator+(Complex& c) {
//    Complex result(real + c.real, imag + c.imag);
//    return result;
//}
//
//Complex Complex:: operator-(Complex& c) {
//    Complex result(real - c.real, imag - c.imag);
//    return result;
//}
//
//Complex Complex:: operator*(Complex& c) {
//    Complex result(real * c.real - imag * c.imag, imag * c.real + real * c.imag);
//    return result;
//}
//
//Complex Complex:: operator/(Complex& c) {
//    double mo = real * c.real + imag * c.imag;
//    Complex result(real / mo, imag / mo);
//    Complex conju(c.real, -c.imag);
//    return result.operator * (conju);
//}
