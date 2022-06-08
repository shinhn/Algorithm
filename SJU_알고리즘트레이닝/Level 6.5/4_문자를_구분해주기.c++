#include <iostream>
using namespace std;

char ch;

int main(){
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') cout << "소문자입력!!\n";
    if(ch >= 'A' && ch <= 'Z') cout << "대문자입력!!\n";
    if(ch >= '0' && ch <= '9') cout << "숫자문자입력!!\n";

    return 0;
}