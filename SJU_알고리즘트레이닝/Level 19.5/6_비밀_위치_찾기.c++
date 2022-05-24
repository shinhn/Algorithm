#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[3][4] = {
    {'A','B','G','K'},
    {'T','T','A','B'},
    {'A','C','C','D'}
};

char pattern[2][2];

int cnt;

bool isSame(int y, int x){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(map[y+i][x+j] != pattern[i][j]) return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> pattern[i][j];
        }
    }

    for(int i=0;i<=3-2;i++){
        for(int j=0;j<=4-2;j++){
            if(isSame(i,j)){
                cnt++;
            }
        }
    }

    if(cnt >= 1) cout << "발견(" << cnt << "개)\n";
    else cout << "미발견\n";

    return 0;
}