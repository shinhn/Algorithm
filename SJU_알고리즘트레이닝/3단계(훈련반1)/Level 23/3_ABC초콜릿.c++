#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char alpa[3] = {'A','B','C'};
int n, ans;
vector<char> path;

void dfs(int depth){
    if(depth == n){
        bool flag = true;
        for(int i=0;i<path.size()-2;i++){
            char ch = path[i];
            int cnt = 1;
            for(int j=i+1;j<path.size();j++){
                if(ch == path[j]) cnt++;
                else break;
            }
            if(cnt == 3){
                flag = false;
                break;
            }
        }

        if(flag) ans ++;

        return;
    }
    for(int i=0;i<3;i++){
        path.push_back(alpa[i]);
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