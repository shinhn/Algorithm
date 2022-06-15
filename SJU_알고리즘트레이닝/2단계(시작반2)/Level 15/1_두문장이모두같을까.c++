#include <iostream>
#include <cstring>
using namespace std;

string str1,str2;

int main(){
    cin >> str1 >> str2;

    if(str1 == str2) cout << "같음";
    else cout << "다름";

    return 0;
}