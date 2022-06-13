#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int n;
vector<int> path;

void dfs(int depth){
    if(depth == 4){
        for(int i=0;i<path.size();i++){
            cout << path[i];
        }
        cout << "\n";
        return;
    }
    
    for(int i=1;i<=n;i++){
        path.push_back(i);
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
    
    return 0;
}