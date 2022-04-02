#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    queue<int> que;
    for(int i=1;i<=N;i++){
        que.push(i);
    }

    while(que.size()>1){
        // 한장버림
        que.pop();
        // 한장꺼내서 맨 아래로 옮김
        int num = que.front();
        que.pop();
        que.push(num);
    }

    cout << que.front() << "\n";

    return 0;
}