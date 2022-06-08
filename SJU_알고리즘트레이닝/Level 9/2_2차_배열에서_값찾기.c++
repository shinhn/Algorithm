#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[3][5] = {
    {'A','B','C','D','E'},
    {'E','A','B','A','B'},
    {'A','C','D','E','R'}
    };

char ch;
int cnt;

int main(){

    cin >> ch;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] == ch) cnt++;
        }
    }

    if(cnt >= 3) cout << "대발견";
    else if(cnt >= 1 && cnt <= 2) cout << "발견";
    else if(cnt == 0) cout << "미발견";

    return 0;
}