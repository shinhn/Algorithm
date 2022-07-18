#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string str;
vector<char> arr;
vector<char> arr2;
int N, alp[26];

int main(){

    cin >> str;

    for(int i=0;i<str.length();i++){
        arr.push_back(str[i]);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    // for(int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }

    cin >> N;

    for(int i=0;i<N;i++){
        arr2.push_back(arr[i]);
    }

    for(int i=0;i<arr2.size();i++){
        alp[arr2[i]-'A'] ++;
    }

    int max_idx = 0, max_cnt = 0;
    for(int i=0;i<26;i++){
        if(alp[i] > max_cnt){
            max_idx = i;
            max_cnt = alp[i];
        }
    }

    cout << char(max_idx + 'A');

    return 0;
}