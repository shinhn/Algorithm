#include <iostream>
using namespace std;

struct Mart{
    int a, b, c;
};

int main(){
    Mart A,B,C;

    A.a = 300;
    A.b = 500;
    A.c = 1000;

    B.a = 450;
    B.b = 450;
    B.c = 900;

    C.a = 200;
    C.b = 150;
    C.c = 700;

    char ch;
    cin >> ch;

    if(ch == 'A') cout << (A.a + A.b + A.c)/3;
    if(ch == 'B') cout << (B.a + B.b + B.c)/3;
    if(ch == 'C') cout << (C.a + C.b + C.c)/3;

    return 0;
}