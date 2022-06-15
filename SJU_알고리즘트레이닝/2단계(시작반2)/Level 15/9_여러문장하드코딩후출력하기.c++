#include <iostream>
using namespace std;

string str1 = "BBQWORLD", str2 = "KFCAPPLE", str3 = "LOT";
char ch;
int cnt;

int main(){
    cin >> ch;

    for(int i=0;i<str1.length();i++){
        if(str1[i] == ch) cnt++;
    }

    for(int i=0;i<str2.length();i++){
        if(str2[i] == ch) cnt++;
    }

    for(int i=0;i<str3.length();i++){
        if(str3[i] == ch) cnt++;
    }

    cout << cnt;

    return 0;
}