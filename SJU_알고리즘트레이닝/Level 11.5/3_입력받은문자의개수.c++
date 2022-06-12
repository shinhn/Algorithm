#include <iostream>

using namespace std;

char arr[8] = {'A','1','1','1','5','A','w','z'};
char ch;
int cnt;

int main(){
    cin >> ch;

    for(int i=0;i<8;i++){
        if(arr[i] == ch) cnt ++;
    }

    if(cnt >= 3) cout << "THREE";
    else if(cnt >= 2) cout << "TWO";
    else if(cnt >= 1) cout << "ONE";
    else cout << "NOTHING";

    return 0;
}