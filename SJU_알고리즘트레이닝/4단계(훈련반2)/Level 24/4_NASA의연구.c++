#include <iostream>
#include <vector>
using namespace std;

string str;
int alp[26];
int max_cnt, min_cnt, max_idx, min_idx;

int main(){
    cin >> str;

    for(int i=0;i<str.length();i++){
        alp[str[i] - 'A'] ++;
    }

    max_cnt = alp[0];
    min_cnt = alp[0];
    for(int i=0;i<26;i++){
        if(alp[i] > max_cnt){
            max_cnt = alp[i];
            max_idx = i;
        }
        if(alp[i] < min_cnt){
            min_cnt = alp[i];
            min_idx = i;
        }
    }

    cout << char(max_idx + 'A') << "\n";
    cout << char(min_idx + 'A') << "\n";

    return 0;
}