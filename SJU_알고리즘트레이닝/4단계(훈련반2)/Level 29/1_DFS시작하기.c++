#include <iostream>
using namespace std;

int arr[101][101];
int visited[101];
int n, cnt=1;

void dfs(int now){
    if(cnt == n){
        return;
    }

    for(int j=0;j<n;j++){
        if(arr[now][j] == 0) continue;
        if(visited[j]) continue;

        visited[j] = 1;
        cnt++;

        cout << j << " ";
        dfs(j);

        visited[j] = 0;
        cnt--;
    }
    
}

int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    visited[0] = 1;
    cout << 0 << " ";
    dfs(0);

    return 0;
}