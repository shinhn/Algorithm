#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
2차원 배열의 최대 크기는 300*300

(i, j) 위치부터 (x, y) 위치까지에 저장되어 있는 수들의 합을 k번 구한다. 최대 10,000번

따라서 최악의 경우 300*300*10,000 번 연산을 해야함 -> 시간초과가 될 수도 있음

-> 누적합 이용
-> 시작점을 (1,1)로 두고 이차배열의 특정 위치를 입력 받을 때 시작점에서 특정 위치까지의 합을 구해 저장하도록 하자.
-> 하지만 이방법은 나중에 (i, j) 위치부터 (x, y) 위치까지의 구간합을 구할 때 중복되는 구간을 생각해야 하기 때문에 좀 복잡함;
-> 가로 방향으로의 구간합만 구해서 저장해놓고 (i, j) 위치부터 (x, y) 위치까지의 합을 가로방향으로 쪼개서 따로 구한다음 합치는 방법이 더 간단
*/

int N, M, K;
int arr[301][301];
int s[301][301]; // 시작점을 (1,1)에서 특정 위치까지의 합

int Sum(int i, int j, int x, int y){
    int sum=0;
    for(int t=i;t<=x;t++){
        sum += s[t-1][y-1];
        if(j-2>=0) sum -= s[t-1][j-2];
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr[i][j];

            if(i==0 && j==0){
                s[0][0] = arr[0][0];
            }
            else{
                if(j-1 >= 0) s[i][j] += s[i][j-1];
                s[i][j] += arr[i][j];
            }
        }
    }

    // 부분합 확인
    // cout << "\n";
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<M;j++){
    //         cout << s[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cin >> K;
    for(int t=0;t<K;t++){
        int i,j,x,y;
        cin >> i >> j >> x >> y;

        cout << Sum(i,j,x,y) << "\n";
    }

}