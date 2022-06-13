#include <iostream>
using namespace std;

string str;
int cnt;

int main(){
    cin >> str;
    cout << str.length() << "\n";

    for(int i=0;i<str.length();i++){
        if(str[i] == str[str.length()-1]) cnt++;
    }

    cout << cnt;

    return 0;
}