#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
모든 노드의 부모 노드를 찾아야 하므로 dfs 혹은 bfs 사용
*/

int N;
vector<int> tree[100001];
int parent[100001];
int visited[100001];

void findParent(int node){ // bfs
    visited[node] = true;

    for(int i=0;i<tree[node].size();i++){
        int next_node = tree[node][i];
        if(visited[next_node]) continue;

        parent[next_node] = node;
        findParent(next_node);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=1;i<=N-1;i++){
        int node1, node2;
        cin >> node1 >> node2;

        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }

    // 트리 확인
    // cout << "\n";
    // for(int i=1;i<=N;i++){
    //     cout << i << " : ";
    //     for(int j=0;j<tree[i].size();j++){
    //         cout << tree[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";

    // 2번 노드 ~ N번 노드의 부모 노드 찾기
    findParent(1);
    for(int i=2;i<=N;i++){
        cout << parent[i] << "\n";
    }

    return 0;
}