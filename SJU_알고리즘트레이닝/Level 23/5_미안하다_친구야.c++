#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char fr[5] = {'E', 'W', 'A', 'B', 'C'};
vector<char> com;

int except;
char except_f;

bool isExist(int idx){
    for(int i=0;i<com.size();i++){
        if(com[i] == fr[idx]) return true;
    }
    return false;
}

void dfs(int depth){
    if(depth == 4){
        for(int i=0;i<com.size();i++){
            cout << com[i];
        }
        cout << "\n";

        return;
    }

    for(int i=0;i<5;i++){
        if(i == except) continue;
        if(isExist(i)) continue;
        com.push_back(fr[i]);
        dfs(depth+1);
        com.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> except_f;
    for(int i=0;i<5;i++){
        if(fr[i] == except_f) except = i;
    }

    dfs(0);

    return 0;
}