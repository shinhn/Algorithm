#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/*
표의 최대 크기가 1024 x 1024 이므로 매번 표 전체를 탐색하며 최대 100,000번 연산을 하면 1024 x 1024 x 100,000 번이므로 시간초과 날듯
-> 누적합을 이용해 (1,1)에서 (x,y)까지의 합을 미리 구해 저장해두자
-> (x1, y1)부터 (x2, y2)의 합을 구할 때는 중복 되는 부분 유의
*/

int N, M;
int map[1025][1025];
int sum_map[1025][1025]; // 누적합

void Set_sum_map(int x, int y){
    if(x==0 && y==0){
        sum_map[x][y] = map[x][y];
        return;
    }

    int sum=0;
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            sum += map[i][j];
        }
    }

    sum_map[x][y] = sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> map[i][j];
            Set_sum_map(i, j);
        }
    }

    for(int i=0;i<M;i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum_map[x2][y2] - sum_map[x1-1][y2] - sum_map[x2][y1-1] + sum_map[x1-1][y1-1]<< "\n";
    }

    // cout << "\n";
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout << sum_map[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";


    return 0;
}