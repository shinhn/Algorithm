#include <iostream>
using namespace std;

string str;
int alp[26], cnt;

int main(){

    cin >> str;

    for(int i=0;i<str.length();i++){
        alp[str[i]-'A'] ++;
    }

    for(int i=0;i<26;i++){
        if(alp[i] > 0) cnt++;
    }

    cout << cnt << "종류";

    return 0;
}