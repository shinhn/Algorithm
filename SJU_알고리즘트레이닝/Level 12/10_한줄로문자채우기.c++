#include <iostream>
using namespace std;

char arr[5][5];
int col;
char ch;

int main(){
    cin >> col >> ch;

    for(int i=4;i>=0;i--){
        arr[col-1][i] = char(ch);
        ch++;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(!arr[i][j]) cout << 0;
            else cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}