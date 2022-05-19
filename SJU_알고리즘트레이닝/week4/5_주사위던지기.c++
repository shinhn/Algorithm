#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, M;
vector<int> arr;
bool visited[6];

void dfs1(int level){
    if(level == N){
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " "; 
        }
        cout << "\n";
        return;
    }

    for(int i=1;i<=6;i++){
        arr.push_back(i);
        dfs1(level+1);
        arr.pop_back();
    }
    
}

void dfs3(int level){
    if(level == N){
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " "; 
        }
        cout << "\n";
        return;
    }

    for(int i=1;i<=6;i++){
        if(visited[i] == true)continue;

        arr.push_back(i);
        visited[i] = true;
        dfs3(level+1);
        arr.pop_back();
        visited[i] = false;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    if(M==1){
        dfs1(0);
    }
    else if(M==3){
        dfs3(0);
    }
    

    return 0;
}