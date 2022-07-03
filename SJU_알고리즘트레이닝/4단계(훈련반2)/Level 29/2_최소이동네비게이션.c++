#include <iostream>
#include <queue>
using namespace std;

int arr[7][7] = {
    {0,0,0,0,0,0,0},
    {0,0,0,1,0,1,1},
    {0,1,0,0,1,0,0},
    {0,0,0,0,0,1,0},
    {0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0},
};

int visited[7];
int dist[7];

queue<int> que;
int s, e, cnt;

void BFS(){
    while(!que.empty()){
        int now = que.front();
        que.pop();

        for(int i=1;i<=6;i++){
            if(arr[now][i] == 0) continue;
            if(visited[i] == 1) continue;

            visited[i] = 1;
            que.push(i);
            dist[i] = dist[now] + 1;

            if(i == e) {
                cout << dist[i];
                return;
            }

        }
    }

    cout << 0;
}

int main(){
    cin >> s >> e;

    que.push(s);
    BFS();
    

    return 0;
}