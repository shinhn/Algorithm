#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N;
struct work{
    int s, e, w;
};
vector<work> works;

int day[7];
bool visited[200001];

void add_work(int j){
    for(int i=1;i<=6;i++){
        if(day[i] == 8 || works[j].s > i) continue;
        
        
    }
}

void dfs(){
    int cnt1 = 0, cnt2 = 0;
    for(int i=1;i<=6;i++){
        if(day[i] == 8) cnt1++;
    }
    for(int i=0;i<N;i++){
        if(visited[i] == true) cnt2++;
    }
    if(cnt1 == 6){
        if(cnt2 == N) cout << "Yes\n";
        else cout << "No\n";
    }


    for(int i=0;i<works.size();i++){
        if(!visited[i]){
            visited[i] = true;
            
            add_work(i);
            dfs();

            visited[i] = false;
        }
    }
}

int main(){

    // cin >> T;

    cin >> N;
    for(int i=0;i<N;i++){
        int s,e,w;
        cin >> s >> e >> w;
        work tmp = {s,e,w};
        works.push_back(tmp);
    }

    dfs();


    return 0;
}