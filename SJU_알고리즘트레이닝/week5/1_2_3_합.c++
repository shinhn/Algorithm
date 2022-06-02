#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, ans;
vector<int> com;

int Sum(){
    int sum=0;
    for(int i=0;i<com.size();i++){
        sum += com[i];
    }
    return sum;
}

void dfs(int depth){
    if(depth == n+1){
        return;
    }
    if(Sum() == n){
        ans++;
        return;
    }

    for(int i=1;i<=3;i++){
        com.push_back(i);
        dfs(depth+1);
        com.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dfs(0);

    cout << ans << "\n";

    return 0;
}