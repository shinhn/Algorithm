#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int row, col;
    cin >> row >> col;

    char land[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> land[i][j];
        }
    }

    int cnt_A=0,cnt_B=0,max=0;
    

    return 0;
}