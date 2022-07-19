#include <iostream>
using namespace std;

int map[4][8];

int CountMap(int y, int x){
    int max_x = 7, max_y = 3;

    for(int i=y;i<4;i++){
        for(int j=x;j<max_x+1;j++){
            if(map[i][j] == 0){
                max_x = j;
                max_y = i;
                break;
            }
        }
    }

    int cnt = 0;
    if(max_x == 0){
        for(int i=y;i<max_y;i++){
            for(int j=x;j<=7;j++){
                cnt += map[i][j];
            }
        }
    }
    else{
        for(int i=y;i<=max_y;i++){
            for(int j=x;j<=max_x;j++){
                cnt += map[i][j];
            }
        }
    }
    

    cout << "[" << y << "," << x << "] ";
    cout << "[" << max_y << "," << max_x << "] " << cnt << "\n";

    return cnt;
}   

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            cin >> map[i][j];
        }
    }

    int max_cnt = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            if(map[i][j] == 0) continue;

            int cnt = CountMap(i,j);
            if(cnt > max_cnt) max_cnt = cnt;
        }
    }

    cout << max_cnt;

    return 0;
}