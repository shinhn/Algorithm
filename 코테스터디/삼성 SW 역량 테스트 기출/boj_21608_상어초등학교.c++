#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N;
int student[500][5];
int map[21][21], cnt_map[21][21];
vector<pair<int, int>> vec; // 인접한 칸이 가장 많은 좌표 저장
int dy[4] = {1,0,-1,0}, dx[4] = {0,1,0,-1};

void count_near_like(int st){
    cout << "count_near_like\n";
    int max_cnt = -1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(map[i][j] == 0){
                int cnt = 0;
                for(int k=0;k<4;k++){
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if(ny < 1 || ny > N || nx < 1 || nx > N) continue;
                    for(int l=1;l<=4;l++){
                        if(map[ny][nx] == student[st][l]){
                            cnt++;
                        }
                    }
                }
                cnt_map[i][j] = cnt;
                if(cnt > max_cnt) max_cnt = cnt;
            }
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(cnt_map[i][j] == max_cnt) vec.push_back({i,j});
        }
    }
}

void count_near_empty(int st){
    cout << "count_near_empty\n";
    int max_cnt = -1;
    for(int i=0;i<vec.size();i++){
        int y = vec[i].first;
        int x = vec[i].second;
        if(map[y][x] == 0){
            int cnt = 0;
            for(int k=0;k<4;k++){
                int ny = y + dy[k];
                int nx = x + dx[k];
                if(ny < 1 || ny > N || nx < 1 || nx > N) continue;
                if(map[ny][nx] == 0) cnt++;
            }
            cnt_map[y][x] = cnt;
            if(cnt > max_cnt) max_cnt = cnt;
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(cnt_map[i][j] == max_cnt) vec.push_back({i,j});
        }
    }
}

void print(){
    cout << "=========map========\n";
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }

    cout << "=========cnt_map========\n";
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << cnt_map[i][j] << " ";
        }
        cout << '\n';
    }
}

void empty_cnt_map(){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cnt_map[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=1;i<=N*N;i++){
        int n;
        cin >> n;
        student[i][0] = n;
        for(int j=1;j<=4;j++){
            int like;
            cin >> like;
            student[i][j] = like;
        }
    }

    for(int i=1;i<=N*N;i++){
        while(!vec.empty()){
            vec.pop_back();
        }
        empty_cnt_map();
        count_near_like(student[i][0]);

        if(vec.size() == 1) {
            map[vec.back().first][vec.back().second] = student[i][0];
        }
        else{
            while(!vec.empty()){
                vec.pop_back();
            }
            empty_cnt_map();
            count_near_empty(student[i][0]);

            map[vec.back().first][vec.back().second] = student[i][0];
        }

        print();
    }

    

    return 0;
}