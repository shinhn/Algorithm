#include <iostream>
using namespace std;

char arr[3][6] = {
    {'A','B','C','E','F','G'},
    {'H','I','J','K','L','M'},
    {'N','O','P','Q','R','S'}
};

char ans[3][6] = {
    {'A','B','C','E','F','G'},
    {'H','I','J','K','L','M'},
    {'N','O','P','Q','R','S'}
};

string str;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int main(){

    cin >> str;

    for(int i=0;i<str.length();i++){
        int y, x;
        bool flag = false;
        for(int j=0;j<3;j++){
            for(int k=0;k<6;k++){
                if(arr[j][k] == str[i]){
                    y = j;
                    x = k;
                    flag = true;
                    break;
                }
            }
            if(flag == true) break;
        }

        ans[y][x] = '#';

        for(int j=0;j<4;j++){
            int ny = y + dy[j];
            int nx = x + dx[j];

            if(ny < 0 || nx < 0 || ny >= 3 || nx >= 6) continue;

            if(ans[ny][nx] != '#') ans[ny][nx] = '#';
            else ans[ny][nx] = arr[ny][nx];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout << ans[i][j];
        }
        cout << "\n";
    }

    return 0;
}