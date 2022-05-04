#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N, M, x, y, K, op;
int map[20][20];
int dice[7]; // idx 0 은 의미 없는 값 
int tmp[7]; // 주사위 복사용

// void print_dice(){
//     cout << "\n";
//     for(int j=1;j<=6;j++){
//         cout << dice[j] << " ";
//     }  
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> x >> y >> K;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int num;
            cin >> num;
            map[i][j] = num;
        }
    }

    for(int i=0;i<K;i++){
        cin >> op;
        if(op == 1) // 동쪽으로 굴리기
        {
            if(y+1 < N) continue;
            y += 1;
            
            tmp[6] = dice[3];
            tmp[2] = dice[2];
            tmp[3] = dice[1];
            tmp[4] = dice[6];
            tmp[5] = dice[5];
            tmp[1] = dice[4];

            for(int j=1;j<=6;j++){
                dice[j] = tmp[j];
            }

            if(map[x][y] == 0){
                map[x][y] = dice[6];
            }
            else {
                dice[6] = map[x][y];
                map[x][y] = 0;
            }

            cout << dice[1] << "\n";
            // cout << "\n" << x << " " << y ;
            // print_dice();
        }
        else if(op == 2) // 서쪽으로 굴리기
        {
            if(y-1 < 0) continue;
            y -= 1;

            tmp[6] = dice[4];
            tmp[2] = dice[2];
            tmp[3] = dice[6];
            tmp[4] = dice[1];
            tmp[5] = dice[5];
            tmp[1] = dice[3];

            for(int j=1;j<=6;j++){
                dice[j] = tmp[j];
            }

            if(map[x][y] == 0){
                map[x][y] = dice[6];
            }
            else {
                dice[6] = map[x][y];
                map[x][y] = 0;
            }

            cout << dice[1] << "\n";
            // cout << "\n" << x << " " << y ;
            // print_dice();
        }
        else if(op == 3) // 북쪽으로 굴리기
        {
            if(x-1 < 0) continue;
            x -= 1;

            tmp[6] = dice[2];
            tmp[2] = dice[1];
            tmp[3] = dice[3];
            tmp[4] = dice[4];
            tmp[5] = dice[6];
            tmp[1] = dice[5];

            for(int j=1;j<=6;j++){
                dice[j] = tmp[j];
            }

            if(map[x][y] == 0){
                map[x][y] = dice[6];
            }
            else {
                dice[6] = map[x][y];
                map[x][y] = 0;
            }

            cout << dice[1] << "\n";
            // cout << "\n" << x << " " << y ;
            // print_dice();
        }
        else{ // 남쪽으로 굴리기
            if(x+1 >= N) continue;
            x += 1;

            tmp[6] = dice[5];
            tmp[2] = dice[6];
            tmp[3] = dice[3];
            tmp[4] = dice[4];
            tmp[5] = dice[1];
            tmp[1] = dice[2];

            for(int j=1;j<=6;j++){
                dice[j] = tmp[j];
            }

            if(map[x][y] == 0){
                map[x][y] = dice[6];
            }
            else {
                dice[6] = map[x][y];
                map[x][y] = 0;
            }

            cout << dice[1] << "\n";
            // cout << "\n" << x << " " << y ;
            // print_dice();
        }
    }

    return 0;
}