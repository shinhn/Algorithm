#include <iostream>
using namespace std;

char ch;

int main(){
    cin >> ch;
    if(ch >= '0' && ch <= '9'){
        ch -= '0';
        cout << ch + 5;
    }

    return 0;
}