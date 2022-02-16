#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열을 모두 구하는 문제

1 ≤ M ≤ N ≤ 8

*/

int N, M;
vector<int> arr; // 주어진 숫자
bool visited[8]; // 방문 기록 (중복 방지)
vector<int> ans; // 출력할 수열

void DFS(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }

    for (int i = 0; i < N; i++)
    {
        if (visited[i])
            continue; // 이미 방문했으면 패스

        visited[i] = true;
        ans.push_back(arr[i]);

        DFS(cnt + 1);

        ans.pop_back();     // 출력할 수열 비워줌
        visited[i] = false; // 방문기록 초기화
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        arr.push_back(i+1);
        visited[i] = false;
    }

    DFS(0);

    return 0;
}