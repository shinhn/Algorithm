#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[3][5], ch;

int main(){
    cin >> ch;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = ch;
            ch++;
        }
    }

    cout << char(arr[2][2] - ('A'-'a'));

    return 0;
}