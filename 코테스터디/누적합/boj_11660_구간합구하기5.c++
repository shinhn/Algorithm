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
int map[1026][1026];
int pSum_map[1026][1026]; // 누적합

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> map[i][j];
            pSum_map[i][j] = pSum_map[i-1][j] + pSum_map[i][j-1] - pSum_map[i-1][j-1] + map[i][j];
        }
    }

    for(int i=0;i<M;i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << pSum_map[x2][y2] - pSum_map[x1-1][y2] - pSum_map[x2][y1-1] + pSum_map[x1-1][y1-1] << "\n";
    }

    return 0;
}