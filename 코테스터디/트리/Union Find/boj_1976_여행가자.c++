#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
vector<int> plan;
int parent[201];

int find(int node){
    if(parent[node] == node) return node; // 뿌리 노드
    else return parent[node] = find(parent[node]);
}

void uni(int a, int b){
    int rootA = find(a);
    int rootB = find(b);

    parent[rootA] = rootB;
}

void init(){
    for(int i=0;i<=N;i++){
        parent[i] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    init();

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            int connected;
            cin >> connected;
            if(connected == 1){
                uni(i,j);
            }
        }
    }

    for(int i=0;i<M;i++){
        int tmp;
        cin >> tmp;
        plan.push_back(tmp);
    }

    for(int i=0;i<plan.size()-1;i++){
        int city1 = plan[i];
        int city2 = plan[i+1];

        if(find(city1) != find(city2)){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}