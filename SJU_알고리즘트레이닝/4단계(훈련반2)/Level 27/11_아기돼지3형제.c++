#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[4][4];

int dy[8] = {-1,-1,-1,0,0,1,1,1};
int dx[8] = {-1,0,1,-1,1,-1,0,1};

int main(){

    fill(&arr[0][0], &arr[4][4], '_');

    for(int i=0;i<3;i++){
        int y, x;
        cin >> y >> x;

        arr[y][x] = '#';

        for(int j=0;j<8;j++){
            int ny = y + dy[j];
            int nx = x + dx[j];

            if(ny >= 0 && ny < 4 && nx >= 0 && nx < 4){
                if(arr[ny][nx] == '_') arr[ny][nx] = '@';
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}