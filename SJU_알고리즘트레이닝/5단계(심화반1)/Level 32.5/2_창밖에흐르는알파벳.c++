#include <iostream>
using namespace std;

string str;

int main(){

    cin >> str;

    cout << str << "\n";

    while(1){
        int cnt = 0;
        for(int i=0;i<str.length();i++){
            if(str[i] == '_') cnt ++;
        }
        if(cnt == str.length()) break;

        for(int i=0;i<str.length();i++){
            if(str[i] == '_') continue;
            else if(str[i] - 1 < 'A') str[i] = '_';
            else str[i] = char(str[i]-1);
        }


        cout << str << "\n";
    }

    return 0;
}