#include <iostream>
using namespace std;

int max_l;
string str1, str2, str3, ans;

int main(){
    cin >> str1;
    if(str1.length() > max_l){
        max_l = str1.length();
        ans = str1;
    }

    cin >> str2;
    if(str2.length() > max_l){
        max_l = str2.length();
        ans = str2;
    }

    cin >> str3;
    if(str3.length() > max_l){
        max_l = str3.length();
        ans = str3;
    }

    cout << ans;

    return 0;
}