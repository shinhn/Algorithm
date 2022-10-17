#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, target, cnt;
vector<int> numbers;
bool visited[1001];

void dfs(int i, int now){
    if(now == target && i == n-1){
        cnt ++;
        return;
    }
    if(i<=n-1){
        dfs(i+1, now + numbers[i+1]);
        dfs(i+1, now - numbers[i+1]);
    }
}

int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    cin >> target;

    dfs(-1, 0);
    
    cout << cnt;

    return 0;
}