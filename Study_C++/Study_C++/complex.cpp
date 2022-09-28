//
//  complex.cpp
//  Study_C++
//
//  Created by 강인혜 on 2022/09/21.
//

//#include "complex.hpp"
//
//Complex::Complex() {
//   real = imag = 0;
//}
//Complex::Complex(double re, double im) {
//   real = re, imag = im;
//}
//
//void Complex::showme() {
//   cout << "(" << real << "," << imag << "i" << ")\n";
//}
//
//Complex Complex::operator+ (Complex& c) {
//   Complex result(real + c.real, imag + c.imag);
//   return result;
//}
//
//Complex Complex::operator- (Complex& c) {
//   Complex result(real - c.real, imag - c.imag);
//   return result;
//}
//
//Complex Complex::operator * (Complex& c) {
//   Complex result(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
//   return result;
//}
//
//Complex Complex::operator/ (Complex& c) {
//   double mo = c.real * c.real + c.imag * c.imag;
//   Complex result(real / mo, imag / mo);
//   Complex conju(c.real, -c.imag);
//   return result.operator*(conju);
//   //  (c.imag) {
//   //   double mo = c.real * c.real + c.imag * c.imag;
//   //   Complex result(real / mo, imag / mo);
//   //   Complex conju(c.real, -c.imag);
//   //   return result.operator*(conju);
//   //}
//   //else if (c.real) {
//   //   Complex result(real / c.real, imag / c.real);
//   //   return result;
//   //}
//   //else {
//   //   cout << "0으로 나눌 수 없습니다.   ";
//   //   Complex result(real, imag);
//   //   return result;
//   //}
//   
//}
//
//
//int main() {
//   Complex result;
//   cout << "c1   ";
//   Complex c1(3, 2); c1.showme();
//   cout << "c2   ";
//   Complex c2(2, -3); c2.showme();
//   cout << "+   ";
//   result = c1 + c2; result.showme();
//   cout << "-   ";
//   result = c1 - c2; result.showme();
//   cout << "*   ";
//   result = c1 * c2; result.showme();
//   cout << "/   ";
//   result = c1 / c2; result.showme();
//}
