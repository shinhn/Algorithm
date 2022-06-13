#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int map[2][4] = {{3,55,42},{-5,-9,-10}};
int pix[2][2];

bool isExist(int num){
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(map[i][j] == num) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> pix[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(isExist(pix[i][j])) cout << "Y ";
            else cout << "N ";
        }
        cout << "\n";
    }
    
    return 0;
}