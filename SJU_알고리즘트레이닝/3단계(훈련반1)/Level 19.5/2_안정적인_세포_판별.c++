#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int map[5][4];

int dy[8] = {-1,-1,-1,0,0,1,1,1};
int dx[8] = {-1,0,1,-1,1,-1,0,1};

bool isOk(int y,int x){
    int ny, nx;
    for(int i=0;i<8;i++){
        ny = y + dy[i];
        nx = x + dx[i];

        if(ny >= 0 && ny < 5 && nx >= 0 && nx < 4){
            if(map[ny][nx] == 1) return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(map[i][j] == 1){
                if(!isOk(i,j)){
                    cout << "불안정한 상태\n";
                    return 0;
                }
            }
        }
    }

    cout << "안정된 상태\n";

    return 0;
}