#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
N개의 자연수 중에서 M개를 고른 수열
고른 수열은 오름차순이어야 한다.
*/

int N, M;
vector<int> arr, ans;
bool visited[8];

void dfs(int size){
    if(size == M){ // 출력
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=0;i<N;i++){
        if(visited[i]) continue; // 중복 제거
        if(ans.size() >= 1 && ans.back() > arr[i]) continue; // 오름차순으로 만들기 위함

        ans.push_back(arr[i]);
        visited[i] = true;
        dfs(size+1);
        ans.pop_back();
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    dfs(0);

    return 0;
}