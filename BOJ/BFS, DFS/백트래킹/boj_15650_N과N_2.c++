#include <iostream>
#include <vector>

using namespace std;

/*
1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
고른 수열은 오름차순이어야 한다.
*/

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
        if(arr.size()>=1 && arr.back() > i) continue; // 수열을 오름차순으로 만들기 위함

        arr.push_back(i);
        visited[i] = true;

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