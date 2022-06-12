#include <iostream>
using namespace std;

string str;
char a,b,c;
int cnt;

int main(){
    cin >> str;
    cin >> a >> b >> c;

    for(int i=0;i<str.length();i++){
        if(str[i] == a) cnt++;
    }
    cout << a << "=" << cnt << "\n";

    cnt = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == b) cnt++;
    }
    cout << b << "=" << cnt << "\n";

    cnt = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == c) cnt++;
    }
    cout << c << "=" << cnt << "\n";
    

    return 0;
}