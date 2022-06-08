#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[3][3];
int y1,x1,y2,x2;

int main(){

    char t = 'A';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = char(t);
            t++;
        }
    }

    cin >> y1 >> x1 >> y2 >> x2;

    int tmp = arr[y1][x1];
    arr[y1][x1] = arr[y2][x2];
    arr[y2][x2] = tmp;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}