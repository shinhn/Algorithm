#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

vector<char> path;
string input;
int cnt;

bool isSame(){
    for(int i=0;i<3;i++){
        if(input[i] != path[i]) return false;
    }

    return true;
}

void dfs(int level){
    if(level==3){
        cnt ++;
        if(isSame()){
            cout << cnt << "번째\n";
            return;
        }
        return;
    }

    path.push_back('A');
    dfs(level+1);
    path.pop_back();

    path.push_back('B');
    dfs(level+1);
    path.pop_back();

    path.push_back('C');
    dfs(level+1);
    path.pop_back();

    path.push_back('D');
    dfs(level+1);
    path.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;
    dfs(0);
    
    return 0;
}