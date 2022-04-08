#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> que;

    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        que.push(tmp);
    }

    int sum = 0;
    while(que.size()!=1){
        int num1 = que.top();
        que.pop();
        int num2 = que.top();
        que.pop();
        sum += (num1+num2);
        que.push(num1 + num2);
    }

    cout << sum << "\n";

    return 0;
}