#include <iostream>
using namespace std;

int map[7][7];

int main(){
    
    for(int i=0;i<6;i++){
        int row, col;
        cin >> row >> col;

        if(map[row][col] == 1){
            cout << "중복된좌표발견";
            return 0;
        }
        else{
            map[row][col] = 1;
        }
    }

    cout << "중복없음";

    return 0;
}