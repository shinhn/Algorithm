#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

// 시도1 : vector에 담아 sort하는 방법 -> 메모리 초과
// 시도2 : 메모리를 줄여야 하므로 우선순위 큐에 담을 때 크기가 N 커지면 가장 작은 수는 버림

int N;
priority_queue<int, vector<int>, greater<int>> que;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int num;
            cin >> num;
            que.push(num);

            if(que.size() > N) que.pop();    
        }   
    }

    cout << que.top() << "\n";

    return 0;
}