#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, cnt;
bool used[10]; // col 사용 여부 기록

void dfs(int row){
    if(row == N){
        cnt ++; 
        return;
    }
    for(int col=0;col<N;col++){
        if(used[col] == true) continue;
        used[col]=true;
        dfs(row+1);
        used[col]=false;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    dfs(0);
    cout << cnt;

    return 0;
}