#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char member[5] = {'B','T','S','K','R'};
int n, ans;
vector<char> path;

bool isExist(int idx){
    for(int i=0;i<path.size();i++){
        if(path[i] == member[idx]) return true;
    }
    return false;
}

void dfs(int depth){
    if(depth == n){
        bool flag = false;
        for(int i=0;i<path.size();i++){
            if(path[i] == 'S') flag = true;
        }

        if(flag) ans ++;

        return;
    }
    for(int i=0;i<5;i++){
        if(isExist(i)) continue;
        path.push_back(member[i]);
        dfs(depth+1);
        path.pop_back();
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