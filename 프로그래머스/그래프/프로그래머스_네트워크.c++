#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
<접근>
dfs 나 bfs로 탐색하면서 한번 돌때마다 answer(네트워크 수) ++

<시간복잡도>
O(V*V)
*/

int answer = 0;

void dfs(vector<vector<int> > &computers, vector<bool> &visited, int com)
{
    visited[com] = true;
    for (int i = 0; i < computers.size(); i++)
    {
        if (!visited[i] && computers[com][i] == 1)
        {
            dfs(computers, visited, i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 3;
    vector<vector<int> > computers;
    vector<bool> visited(n, false);

    vector<int> c1;
    c1.push_back(1);
    c1.push_back(1);
    c1.push_back(0);

    vector<int> c2;
    c2.push_back(1);
    c2.push_back(1);
    c2.push_back(1);

    vector<int> c3;
    c3.push_back(0);
    c3.push_back(1);
    c3.push_back(1);

    computers.push_back(c1);
    computers.push_back(c2);
    computers.push_back(c3);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(computers, visited, i);
            answer++;
        }
    }

    cout << answer;

    return 0;
}