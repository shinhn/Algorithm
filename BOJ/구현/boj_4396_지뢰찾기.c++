#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n;
char map[11][11], play[11][11], ans[11][11];
bool trap; // 지뢰 밟았는지 체크

int count_mine(int y, int x){
    int cnt=0;

    for(int i=y-1;i<=y+1;i++){
        for(int j=x-1;j<=x+1;j++){
            if(i >= 0 && i < n && j >= 0 && j < n){
                if(map[i][j] == '*') cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> play[i][j];

            if(play[i][j] == 'x') {
                if(map[i][j] == '*') trap = true;
                int cnt = count_mine(i,j);
                ans[i][j] = char(cnt + '0');
            }
            else ans[i][j] = '.';
        }
    }

    if(trap){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(map[i][j] == '*') ans[i][j] = '*';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j];
        }
        cout << '\n';
    }


    return 0;
}