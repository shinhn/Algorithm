#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[2][3];

void input(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
}

void findUpper(){
    int cnt=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] >= 'A' && arr[i][j] <= 'Z') cnt ++;
        }
    }
    cout << "대문자" << cnt << "개\n";
}

void findLower(){
    int cnt=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] >= 'a' && arr[i][j] <= 'z') cnt ++;
        }
    }
    cout << "소문자" << cnt << "개\n";
}

int main(){

    input();
    findUpper();
    findLower();

    return 0;
}