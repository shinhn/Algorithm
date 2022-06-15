#include <iostream>
using namespace std;

string str[4];
int a, b;

int main(){
    for(int i=0;i<4;i++){
        cin >> str[i];
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<str[i].length();j++){
            if(str[i][j] == 'A') a=1;
            if(str[i][j] == 'B') b=1;
        }
    }

    if(a==1 && b==1) cout << "대발견";
    else if(a==1 || b==1) cout << "중발견";
    else cout << "미발견";

    return 0;
}