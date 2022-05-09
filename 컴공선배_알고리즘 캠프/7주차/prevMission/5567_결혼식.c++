#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> frd[501];

bool visited[501];
queue<pair<int, int> > que; // <int, int> : <node, depth>

void BFS(){
    que.push({1,0});
    visited[1] = true;

    while(!que.empty()){
        int node = que.front().first;
        int depth = que.front().second;
        que.pop();

        if(depth < 2){ // 깊이가 2 미만일 경우 다음 노드로 이동
            for(int i=1;i<frd[node].size();i++){ // 이어져 있는 모든 노드로 이동해야 함
                int new_node = frd[node][i];
                if(visited[new_node] == true) continue;
                visited[new_node] = true;
                que.push({new_node,depth+1});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i=1;i<=n;i++){
        frd[i].push_back(0);
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        frd[a].push_back(b);
        frd[b].push_back(a);
    }

    // for(int i=1;i<=m;i++){
    //     cout << i << " : ";
    //     for(int j=1;j<frd[i].size();j++){
    //         cout <<frd[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    BFS();

    int cnt=0;
    for(int i=1;i<=n;i++){
        if(visited[i] == true) cnt++;
    }

    cout << cnt-1; // (상근)본인은 세지 않는다.

    return 0;
}