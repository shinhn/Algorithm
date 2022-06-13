#include <iostream>
using namespace std;

char arr[8] = {'M','I','N','Q','U','E','S','T'};

int Length(char ch){
    for(int i=0;i<8;i++){
        if(arr[i] == ch) return i;
    }

    return 0;
}

int main(){
    char a, b, c;
    cin >> a >> b >> c;
    cout << a << "=" << Length(a) << "\n";
    cout << b << "=" << Length(b) << "\n";
    cout << c << "=" << Length(c) << "\n";

    return 0;
}