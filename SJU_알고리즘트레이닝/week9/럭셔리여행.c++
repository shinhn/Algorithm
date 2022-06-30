#include <iostream>
using namespace std;

int N, s, e;
int arr[1010][1010];
int visited[1010];
int cnt, max_price, min_price;

void dfs(int now){
    if(now == e){
        if(cnt > max_price) max_price = cnt;
        if(cnt < min_price) min_price = cnt;

        return;
    }

    for(int j=0;j<N;j++){
        if(arr[now][j] == 0) continue;
        if(visited[j] == 1) continue;

        visited[j] = 1;
        cnt += arr[now][j];

        dfs(j);
        
        visited[j] = 0;
        cnt -= arr[now][j];
    }
}

int main(){
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
            min_price += arr[i][j];
        }
    }

    cin >> s >> e;

    visited[s] = 1;
    dfs(s);

    cout << min_price << "\n";
    cout << max_price << "\n";

    return 0;
}