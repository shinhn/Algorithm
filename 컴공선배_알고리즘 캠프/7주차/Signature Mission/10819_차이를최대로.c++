#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
vector<int> arr;
vector<int> tmp;
bool visited[8];

void dfs(int cnt){
    if(cnt == N){ // N개 모두 넣었으면 식 계산
        int total = 0;
        for(int i=0;i<N-1;i++){
            total += abs(tmp[i] - tmp[i+1]);
        }
        ans = max(ans, total);
        return;
    }
    for(int i=0;i<N;i++){
        if(visited[i] == true) continue; // 이미 넣어준건 패스

        visited[i] = true;
        tmp.push_back(arr[i]);
        dfs(cnt+1);

        // 초기화
        visited[i] = false;
        tmp.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    dfs(0);

    cout << ans << "\n";
}