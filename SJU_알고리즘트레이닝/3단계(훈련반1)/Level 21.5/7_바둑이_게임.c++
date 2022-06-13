#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[7][7] = { // 1 : 흰돌, 2 : 검은돌
    {0,0,0,0,0,0,0},
    {0,0,1,0,1,0,0},
    {0,1,2,0,2,1,0},
    {0,0,1,2,1,0,0},
    {0,0,2,1,0,1,0},
    {0,1,1,0,0,0,0},
    {0,0,0,0,0,0,0}
};

int y, x, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> y >> x;
    map[y][x] = 1;

    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(map[i][j] == 2){
                int cnt=0;
                if(i-1 >= 0 && map[i-1][j] == 1) cnt++;
                if(i+1 < 7 && map[i+1][j] == 1) cnt++;
                if(j-1 >= 0 && map[i][j-1] == 1) cnt++;
                if(j+1 < 7 && map[i][j+1] == 1) cnt++;
                if(cnt == 4) ans++;
            }
        }
    }

    cout << ans;
    return 0;
}