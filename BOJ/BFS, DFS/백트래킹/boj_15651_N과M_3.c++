#include <iostream>
#include <vector>

using namespace std;

/*
1부터 N까지 자연수 중에서 M개를 고른 수열
같은 수를 여러 번 골라도 된다.
*/

int N, M;
vector<int> arr;

void dfs(int size){
    if(size == M){ // 출력
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=1;i<=N;i++){
        arr.push_back(i);

        dfs(size+1);

        arr.pop_back();
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