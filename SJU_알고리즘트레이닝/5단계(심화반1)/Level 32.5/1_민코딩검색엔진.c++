#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string arr[6] = {"ABCD", "ABCE", "AGEH", "EIEI", "FEQE", "ABAD"};
string str;
int ans, str_n;

int main(){

    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] != '?') str_n ++;
    }

    for(int i=0;i<6;i++){
        int cnt = 0;
        for(int j=0;j<str.length();j++){
            if(str[j] == arr[i][j]) cnt ++;
        }

        if(cnt == str_n) ans ++;
    }

    

    cout << ans;

    return 0;
}