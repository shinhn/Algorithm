#include <iostream>

using namespace std;

char arr[3][3] = {
    {'a','b','E'},
    {'E','2','W'},
    {'3','2','4'}
};

int main(){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] >= 'A' && arr[i][j] <= 'Z') cout << char(arr[i][j] - ('A'-'a')) << " ";
            else if(arr[i][j] >= 'a' && arr[i][j] <= 'z') cout << char(arr[i][j] + ('A'-'a')) << " ";
            else cout << char(arr[i][j] + 5) << " ";
        }
        cout << "\n";
    }

    return 0;
}