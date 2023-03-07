#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/*
갈 수 있는 방향은 2가지
최단 경로
*/

int F, S, G, U, D;
int b[1000001], d[2], cnt[1000001];
bool visited[1000001];
queue<int> que;

int bfs(int start){
    que.push(start);
    visited[start] = true;

    while(!que.empty()){
        int now = que.front();
        que.pop();

        for(int i=0;i<2;i++){
            int next = now + d[i];
            if(next < 1 || next > F) continue;
            if(visited[next]) continue;
            if(next == G) return cnt[now] + 1;

            cnt[next] = cnt[now] + 1;
            visited[next] = true;
            que.push(next);
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> F >> S >> G >> U >> D;
    d[0] = U;
    d[1] = -D;

    if(S == G) {
        cout << 0 << '\n';
        return 0;
    }

    int ans = bfs(S);
    
    if(ans == 0) cout << "use the stairs\n";
    else cout << ans << '\n';

    return 0;
}