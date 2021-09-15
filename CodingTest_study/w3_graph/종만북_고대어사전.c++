#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
알파벳 순서 찾는 문제로, 위상정렬 문제이다.
위상정렬 문제는 dfs를 수행하면서 dfs가 종료되는 순서를 기록한 뒤, reverse 함수로 이 순서를 뒤집으면 됨
(dfs의 제일 앞에있는 정점이 제일 늦게 종료 된다는 개념을 이용)
*/

vector<vector<int> > adj; // 인접 행렬 graph
vector<bool> visited;     // 방문 확인
vector<int> order;        // dfs가 종료되는 순서 기록

void MakeGraph(vector<string> words)
{
    adj = vector<vector<int> >(26, vector<int>(26, 0));

    // 간선 (i,j) -> adj[i][j] = 1 -> 알파벳 i가 j보다 앞에 와야 함을 나타낸다.
    for (int i = 0; i < words.size() - 1; i++)
    {
        int j = i + 1;
        for (int k = 0; k < min(words[i].size(), words[j].size()); k++)
        {
            if (words[i][k] != words[j][k])
            {
                // words의 원소는 알파벳이므로 int형으로 변환한 뒤 넣어줌
                int tmp_i = words[i][k] - 'a';
                int tmp_j = words[j][k] - 'a';
                adj[tmp_i][tmp_j] = 1;
                // 순서에 영향을 주는 알파벳은 서로 다른 최초의 알파벳이므로 이후 알파벳은 비교하면 안됨
                break;
            }
        }
    }
}

void dfs(int i)
{
    visited[i] = true;

    for (int j = 0; j < 26; j++)
    {
        if (!visited[j] && adj[i][j])
            dfs(j);
    }

    // dfs가 종료되는 순서(방문한 노드)를 기록
    order.push_back(i);
}

vector<int> TopologicalSort() // 위상정렬
{
    // dfs를 수행하면서 dfs가 종료되는 순서를 기록한 뒤, reverse 함수로 이 순서를 뒤집으면 됨
    visited = vector<bool>(26, 0);
    order.clear();

    for (int i = 0; i < 26; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    reverse(order.begin(), order.end());

    // 그래프 내에 싸이클이 있다면(DAG - 싸이클이 없는 방향그래프가 아니라면) 정렬 결과에 역방향 간선이 있다는 뜻
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            // 역방향 간선일때 빈 vector 리턴
            if (adj[order[j]][order[i]])
                return vector<int>();
        }
    }

    // 없을 경우 원래대로 order 리턴
    return order;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C, n; // C : test case, n : 사전에 포함된 단어의 수

    cin >> C;
    while (C--)
    {
        cin >> n;
        vector<string> words;

        while (n--)
        {
            string word;
            cin >> word;
            words.push_back(word);
        }

        MakeGraph(words);

        vector<int> answer_order = TopologicalSort();

        if (answer_order.empty())
        {
            cout << "INVALID HYPOTHESIS";
        }
        else
        {
            for (int i = 0; i < answer_order.size(); i++)
            {
                cout << char(answer_order[i] + 'a');
            }
        }
        cout << '\n';
    }

    return 0;
}