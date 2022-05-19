#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int l;
vector<char> secret;

void dfs(int level){
    if(level == l){
        for(int i=0;i<secret.size();i++){
            cout << secret[i];
        }
        cout << "\n";
        return;
    }

    secret.push_back('L');
    dfs(level + 1); // L
    secret.pop_back();

    secret.push_back('R');
    dfs(level + 1); // R
    secret.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l;

    dfs(0);
    

    return 0;
}