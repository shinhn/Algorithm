#include <iostream>
#include <queue>

using namespace std;

int N, K, cnt = 0;
queue<pair<int, int> > que; // pair<(좌표),(이동 수)>
bool visited[100001] = {false};

void BFS()
{
    que.push(make_pair(N, 0)); // 시작 좌표(N)와 이동 수(아직 0)
    visited[N] = true;

    while (que.empty() == false)
    {
        pair<int, int> tmp;
        tmp = que.front();
        que.pop();

        if (tmp.first == K) // N좌표가 K좌표에 도달
        {
            cout << tmp.second;
            break;
        }
        else
        {
            if (tmp.first + 1 <= 100000 && visited[tmp.first + 1] == false)
            {
                visited[tmp.first + 1] = true;
                que.push(make_pair(tmp.first + 1, tmp.second + 1));
            }
            if (tmp.first - 1 >= 0 && visited[tmp.first - 1] == false)
            {
                visited[tmp.first - 1] = true;
                que.push(make_pair(tmp.first - 1, tmp.second + 1));
            }
            if (tmp.first * 2 <= 100000 && visited[tmp.first * 2] == false)
            {
                visited[tmp.first * 2] = true;
                que.push(make_pair(tmp.first * 2, tmp.second + 1));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    BFS();
}

/*
N좌표가 이동할 수 있는 경우 : +1, -1, *2
N좌표가 K좌표에 도달할 수 있는 최소 경우의 수 -> 최단경로 문제 -> BFS
*/