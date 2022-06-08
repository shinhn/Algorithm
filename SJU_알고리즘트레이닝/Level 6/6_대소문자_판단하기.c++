#include <iostream>
using namespace std;

char g;

int main(){
    cin >> g;

    if (g >= 'A' && g <= 'Z') cout << "대문자입니다";
    if (g >= 'a' && g <= 'z') cout << "소문자입니다";

    return 0;
}