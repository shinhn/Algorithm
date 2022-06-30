#include <iostream>
using namespace std;

int N;
int arr[15][15];
int visited[15];
int min_price, cnt, price;

void dfs(int now){
    if(now == 1 && cnt >= N){
        if(price < min_price) min_price = price;

        return;
    }

    for(int j=1;j<=N;j++){
        if(arr[now][j] == 0) continue;
        if(visited[j] == 1) continue;
        if(price + arr[now][j] >= min_price) continue; // 가지치기

        visited[j] = 1;
        price += arr[now][j];
        cnt++;

        dfs(j);

        visited[j] = 0;
        price -= arr[now][j];
        cnt--;
    }
    
}

int main(){

    cin >> N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> arr[i][j];
            min_price += arr[i][j];
        }
    }

    dfs(1);

    cout << min_price;

    return 0;
}