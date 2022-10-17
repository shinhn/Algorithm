#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, cnt;

void dfs(int stair){

    if(stair == n) {
        cnt ++;
        return;
    }
    else if(stair > n) return;
    else{
        dfs(stair + 1);
        dfs(stair + 2);
    }

}

int main(){

    cin >> n;

    dfs(0);

    cout << cnt;

    return 0;
}