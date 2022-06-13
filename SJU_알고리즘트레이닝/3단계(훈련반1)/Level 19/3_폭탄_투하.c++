#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

char map[4][5];

int y1,x1,y2,x2;

int dy[8] = {-1,-1,-1,0,1,1,1,0};
int dx[8] = {-1,0,1,1,1,0,-1,-1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(map,'_',sizeof(map));

    cin >> y1 >> x1 >> y2 >> x2;

    for(int i=0;i<8;i++){
        int ny = y1 + dy[i];
        int nx = x1 + dx[i];
        if(ny >= 0 && ny < 4 && nx >= 0 && nx < 5){
            map[ny][nx] = '#';
        }
    }

    for(int i=0;i<8;i++){
        int ny = y2 + dy[i];
        int nx = x2 + dx[i];
        if(ny >= 0 && ny < 4 && nx >= 0 && nx < 5){
            map[ny][nx] = '#';
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}