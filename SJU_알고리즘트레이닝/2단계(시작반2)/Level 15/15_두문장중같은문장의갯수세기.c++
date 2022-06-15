#include <iostream>
using namespace std;

char arr[2][8];
int cnt;

int main(){
    for(int i=0;i<2;i++){
        string str;
        cin >> str;
        for(int j=0;j<str.length();j++){
            arr[i][j] = str[j];
        }
    }

    for(int j=0;j<8;j++){
        if(arr[0][j] != arr[1][j])cnt++;
    }

    cout << cnt;
    

    return 0;
}