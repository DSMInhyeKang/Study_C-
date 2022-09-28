//
//  0914.cpp
//  Study_C++
//
//  Created by 강인혜 on 2022/09/14.
//

//#include <iostream>
//using namespace std;
//
//class MyTime {
//    int hh, mm, ss;
//    int tss;
//    
//public:
//    MyTime();
//    MyTime(int h, int m, int s);
//    void showme();
//};
//
//MyTime:: MyTime() {
//    hh = mm = ss = tss = 0;
//}
//
//MyTime:: MyTime(int h, int m, int s) {
//    hh = h;
//    mm = m;
//    ss = s;
//    tss = h * 60 * 60 + m * 60 + s;
//}
//
//void MyTime:: showme() {
//    cout << hh << mm << ss << tss << endl;
//}
//
//void Cvt_S2H(int ss, int*h, int*m, int*s){
//    ss = abs(ss);
//    *s = ss % 60;
//    *m = ss / 60 % 60;
//    *h = ss / 60 / 60;
//}
//
//int Cvt_H2S(int h, int m, int s){
//    return h * 60 * 60 + m * 60 + s;
//}
//
//int main() {
//    int h1 = 7, m1 = 29, s1 = 48;
//    int h2= 4, m2 = 54, s2 = 39;
//    int ss1, ss2;
//    int hh, mm, ss;
//    
//    ss1 = Cvt_H2S(h1, m1, s1);
//    ss2 = Cvt_H2S(h2, m2, s2);
//    
//    Cvt_S2H(ss1 + ss2, &hh, &mm, &ss);
//    cout << hh << "시간\t" << mm << "분\t" << ss << "초\n";
//    
//    Cvt_S2H(ss1 - ss2, &hh, &mm, &ss);
//    cout << hh << "시간\t" << mm << "분\t" << ss << "초\n";
//    
//    Cvt_S2H(ss1 * 3, &hh, &mm, &ss);
//    cout << hh << "시간\t" << mm << "분\t" << ss << "초\n";
//    
//    Cvt_S2H(ss1 / 4, &hh, &mm, &ss);
//    cout << hh << "시간\t" << mm << "분\t" << ss << "초\n";
//    
//    
//}
