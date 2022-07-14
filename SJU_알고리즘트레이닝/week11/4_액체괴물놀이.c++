#include <iostream>
#include <queue>
using namespace std;

int main(){

    int N, sum=0;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> que;

    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        que.push(n);
    }

    while(que.size() > 1){
        int a = que.top();
        que.pop();
        int b = que.top();
        que.pop();

        sum += (a+b);
        que.push(a+b);
    }

    cout << sum;

    

    return 0;
}