#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[2][3] = {{'F','E','W'},{'D','C','A'}};

void findCh(char ch){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == ch){
                cout << "발견";
                return;
            }
        }
    }

    cout << "미발견";
}

int main(){

    char ch;
    cin >> ch;

    findCh(ch);

    return 0;
}