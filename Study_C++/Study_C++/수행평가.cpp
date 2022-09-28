//
//  수행평가.cpp
//  Study_C++
//
//  Created by 강인혜 on 2022/09/27.
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
//Complex Complex:: operator + (Complex& c) {
//    Complex result(real + c.real, imag + c.imag);
//    return result;
//}
//
//Complex Complex:: operator - (Complex& c) {
//    Complex result(real - c.real, imag - c.imag);
//    return result;
//}
//
//Complex Complex:: operator * (Complex& c) {
//    Complex result(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
//    return result;
//}
//
//Complex Complex:: operator / (Complex& c) {
//    double mo = c.real * c.real + c.imag * c.imag;
//    Complex result(real / mo, imag / mo);
//    Complex conju(c.real, -c.imag);
//    return result.operator * (conju);
//}
//
//void Complex::showme() {
//    cout << "( " << real << ", " << imag << "i ) \n";
//}
//
//int main()
//{
//    Complex result;
//    Complex c1(2, 3);
//    Complex c2(3, -2);
//    
//    cout << " c1 = ";
//    c1.showme();
//    cout << " c2 = ";
//    c2.showme();
//    result = c1 + c2;
//    cout << " c1 + c2 ";
//    result.showme();
//    result = c1 - c2;
//    cout << " c1 - c2 ";
//    result.showme();
//    result = c1 * c2;
//    cout << " c1 * c2 ";
//    result.showme();
//    result = c1 / c2;
//    cout << " c1 / c2 ";
//    result.showme();
//}
