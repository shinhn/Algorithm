#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string str;

bool isCol(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> str;
        if(str == "end") break;

        int cnt = 0;
        bool check = true;

        for(int i=0;i<str.length();i++){
            if(isCol(str[i])) cnt++;
        }
        if(cnt == 0) check = false;
        
        if(str.length() >= 3){
            for(int i=0;i<str.length()-2;i++){
                if(isCol(str[i]) && isCol(str[i+1]) && isCol(str[i+2])) check = false;
                if(!isCol(str[i]) && !isCol(str[i+1]) && !isCol(str[i+2])) check = false;
            }
        }

        if(str.length() >= 2){
            for(int i=0;i<str.length()-1;i++){
                if(str[i] != 'e' && str[i] != 'o' && str[i] == str[i+1]) check = false;
            }
        }

        if(check == false) cout << "<" << str << "> is not acceptable.\n";
        else cout << "<" << str << "> is acceptable.\n";
    }

    return 0;
}