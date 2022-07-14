#include <iostream>
using namespace std;

char cube[3][3] = {
    {'_','5','4'},
    {'3','_','_'},
    {'_','_','1'}
};

char result[3][3];

int main(){

    int k;
    cin >> k;

    while(k--){
        result[0][0] = cube[2][0];
        result[0][1] = cube[1][0];
        result[0][2] = cube[0][0];
        result[1][0] = cube[2][1];
        result[1][1] = cube[1][1];
        result[1][2] = cube[0][1];
        result[2][0] = cube[2][2];
        result[2][1] = cube[1][2];
        result[2][2] = cube[0][2];

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cube[i][j] = result[i][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << cube[i][j];
        }
        cout << "\n";
    }

    return 0;
}