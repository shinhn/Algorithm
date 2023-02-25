#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
N개의 자연수 중에서 M개를 고른 수열
같은 수를 여러 번 골라도 된다.
*/

int N, M;
vector<int> arr, ans;

void dfs(int size){
    if(size == M){ // 출력
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=0;i<N;i++){
        ans.push_back(arr[i]);
        dfs(size+1);
        ans.pop_back();
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