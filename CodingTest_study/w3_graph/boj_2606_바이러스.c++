#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
1번 컴퓨터와 그래프상 연결되어 있는 컴퓨터 수를 구하는 문제
-> 1번부터 dfs 혹은 bfs를 통해 전체를 순회하면 됨

시간복잡도 : 인접리스트를 사용했으므로 O(V+E)
*/

int n, m, cnt = 0; // n : 컴퓨터(정점) 수 , m : 네트워크(간선) 수, cnt = 감염 컴퓨터 수

void dfs(vector<vector<bool> > &network, vector<bool> &visited, int node)
{
    visited[node] = true;

    for (int i = 1; i <= network.size(); i++)
    {
        if (network[node][i] == true && !visited[i])
        {
            cnt++;
            dfs(network, visited, i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    vector<vector<bool> > network(n + 1, vector<bool>(n + 1, false));
    vector<bool> visited(n + 1, false);

    while (m--)
    {
        int n1, n2; // 컴퓨터1, 2
        cin >> n1 >> n2;

        network[n1][n2] = true;
        network[n2][n1] = true;
    }

    dfs(network, visited, 1);

    cout << cnt;

    return 0;
}