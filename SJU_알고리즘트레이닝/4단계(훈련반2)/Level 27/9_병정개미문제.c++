#include <iostream>
using namespace std;

int arr[4][4];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                int ny = i + dy[k];
                int nx = j + dx[k];

                if(ny < 0 || ny > 3 || nx < 0 || nx > 3) continue;
                if(arr[i][j] == 1 && arr[ny][nx] == 1){
                    cout << "위험한 상태";
                    return 0;
                }
            }
        }
    }

    cout << "안전한 상태";

    return 0;
}