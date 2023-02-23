#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, M, ans = INT_MAX;
int map[51][51];
vector<pair<int, int>> house; // 집의 좌표
vector<pair<int, int>> ch; // 치킨집의 좌표
vector<int> ch_idx; // 선택한 치킨집의 인덱스 (M개)
bool visited[51]; // 같은 치킨집을 중복 선택하면 안됨

void func(int size){
    if(size == M){
        // for(int i=0;i<ch_idx.size();i++){
        //     cout << "<" << ch[ch_idx[i]].first << ", " << ch[ch_idx[i]].second << "> ";
        // }
        // cout << "\n";

        int total_ch_dist = 0;
        for(int i=0;i<house.size();i++){
            int y = house[i].first, x = house[i].second;
            int ch_dist = INT_MAX;
            for(int j=0;j<ch_idx.size();j++){
                int ch_y = ch[ch_idx[j]].first, ch_x = ch[ch_idx[j]].second;
                ch_dist = min(ch_dist, abs(ch_y - y) + abs(ch_x - x));
            }
            total_ch_dist += ch_dist;
        }

        //cout << "-> " << total_ch_dist << "\n";
        ans = min(ans, total_ch_dist);

        return;
    }

    for(int i=0;i<ch.size();i++){
        if(visited[i]) continue; // 중복 선택 방지
        if(ch_idx.size() >= 1 && ch_idx.back() > i) continue; // 순서 고려 X

        ch_idx.push_back(i);
        visited[i] = true;
        func(size+1);
        ch_idx.pop_back();
        visited[i] = false;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> map[i][j];
            if(map[i][j] == 1) house.push_back({i,j});
            if(map[i][j] == 2) ch.push_back({i,j});
        }
    }

    func(0);

    cout << ans << "\n";

    return 0;
}