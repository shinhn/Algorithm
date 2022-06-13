#include <iostream>
using namespace std;

string str1, str2, str3;

int main(){
    cin >> str1 >> str2 >> str3;

    if(str1 == str2 && str2 == str3 && str1 == str3) cout << "YES";
    else cout << "NO";

    return 0;
}