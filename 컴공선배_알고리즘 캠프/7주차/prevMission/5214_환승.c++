#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N, K, M;
int Cost[100001 + 1000];
vector<int> Station[100001 + 1000];

queue<pair<int, int> > que; // 역, 방문한 역의 개수
bool visited[100001 + 1000];

int BFS()
{
    que.push({1,1});
    Cost[1] = 1;
    visited[1] = true;
 
    while (!que.empty())
    {
        int now = que.front().first;
        int d = que.front().second;
        que.pop();
 
        if (now == N) return (d+1)/2;

        for (int i = 0; i < Station[now].size(); i++)
        {
            int next = Station[now][i];
            if(visited[next] == false){
                visited[next] = true;
                que.push({next,d+1});
            }
        }
    }
    return -1;
}

int main(){
    cin >> N >> K >> M;
    for (int i = 1; i <= M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            int a; cin >> a;
            Station[a].push_back(i + N);
            Station[i + N].push_back(a);
        }
    }

    int ans = BFS();
    cout << ans << "\n";
}