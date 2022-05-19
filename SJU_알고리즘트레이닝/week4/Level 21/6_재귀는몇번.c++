#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int b,l,cnt;

void dfs(int level){
    cnt ++;

    if(level == l) return;

    for(int i=0;i<b;i++){
        dfs(level + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> b >> l;

    dfs(0);

    cout << cnt << "\n";
    

    return 0;
}