#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool map[1001][1001];
bool visited[1001];
int N, M, sum=0;

void dfs(int u){
    visited[u] = true;

    for(int i=1;i<=N;i++){
        if (map[u][i] == true && visited[i] == false)
        {
            dfs(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int u, v;
        cin >> u >> v;
        map[u][v] = true;
        map[v][u] = true;
    }

    for(int i=1;i<=N;i++){
        if(visited[i] == false){
            sum++;
            dfs(i);
        }
    }

    cout << sum << "\n";

    return 0;
}