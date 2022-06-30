#include <iostream>
#include <queue>
using namespace std;

int N;
int value[20];
int arr[20][20];
int visited[20];
queue<int> que;

int main(){

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> value[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    que.push(0);

    while(!que.empty()){
        int now = que.front();
        que.pop();

        cout << value[now] << " ";

        for(int j=0;j<N;j++){
            if(arr[now][j] == 0) continue;
            que.push(j);
        }
    }
    

    return 0;
}