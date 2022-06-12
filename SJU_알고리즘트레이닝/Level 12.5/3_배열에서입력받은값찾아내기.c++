#include <iostream>
using namespace std;

char arr[4][3]={
    {'D','A','D'},
    {'Q','W','Q'},
    {'A','S','D'},
    {'A','S','D'}
};

void find(char ch){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == ch){
                cout << "존재";
                return;
            }
        }
    }

    cout << "없음";
}

int main(){
    char ch;
    cin >> ch;

    find(ch);

    return 0;
}