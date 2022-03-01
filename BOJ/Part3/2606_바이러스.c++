#include <iostream>
#define MAX 101

using namespace std;

int N, M, cnt=0; // N : 컴퓨터의 수, M : 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수, cnt : 감염된 컴퓨터의 수
int com[MAX][MAX];
int visited[MAX];

void DFS(int c)
{
    cnt ++;
    visited[c] = 1;
    for(int i=1;i<=N;i++)
    {
        if(com[c][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<M;i++)
    {
        int a, b; // 컴퓨터 a, b
        cin >> a >> b;
        com[a][b] = 1;
        com[b][a] = 1; // 양방향
    }

    DFS(1);

    cout << cnt - 1; // 처음 1을 방문했을때 세어진 카운트 빼줌

    return 0;
}