#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

int N, M;
vector<int> arr;
bool visited[9];

void dfs(int size){
    if(size == M){ // 출력
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=1;i<=N;i++){
        if(visited[i]) continue; // 중복 제거

        visited[i] = true;
        arr.push_back(i);

        dfs(size+1);

        arr.pop_back();
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    dfs(0);

    return 0;
}