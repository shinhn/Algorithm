#include <iostream>
using namespace std;

char arr[5][5];

int main(){
    fill(&arr[0][0], &arr[5][5], '0');

    int n;
    cin >> n;
    char ch = char(n+'0');

    for(int i=0;i<5;i++){
        arr[0][i] = ch;
        arr[4][i] = ch;
        arr[i][0] = ch;
        arr[i][4] = ch;
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            arr[i][j] = '_';
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}