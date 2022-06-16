#include <iostream>
using namespace std;

char arr[3][5] = {
    {'F','R','Q','W','T'},
    {'G','A','S','Y','Q'},
    {'A','S','A','D','B'}
};

int main(){
    
    int r;
    cin >> r;
    for(int i=0;i<3;i++){
        cout << arr[i][r];
    }


    return 0;
}