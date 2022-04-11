#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

string map[26]; // 입력 문자 사이에 공백이 없으므로 문자열로 받아야 함
bool visited[26][26];
int N, cnt=0;        // 지도의 크기 N, 각 단지내 집의 수 cnt
vector<int> house; // 각 단지내 집의 수 저장
queue<pair<int,int>> que; // 좌표이므로 pair 사용

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void BFS(int Y, int X){
    cnt = 1;
    visited[Y][X] = true;
    que.push({Y,X});

    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();

        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny > N || nx > N) continue;

            if(map[ny][nx] == '1' && visited[ny][nx] == false){
                visited[ny][nx] = true;
                que.push({ny, nx});
                cnt++;
            }
        }
    }

    house.push_back(cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> map[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(map[i][j] == '1' && visited[i][j] == false){
                BFS(i,j);
            }
        }
    }

    sort(house.begin(), house.end());

    cout << house.size() << "\n";
    for(int i=0;i<house.size();i++){
        cout << house[i] << "\n";
    }
    return 0;
}