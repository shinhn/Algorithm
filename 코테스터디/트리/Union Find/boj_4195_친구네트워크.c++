#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int T, F;
int parent[200002], networkSize[200002];

int find(int node){
    if(parent[node] == node) return node;
    else return parent[node] = find(parent[node]);
}

void uni(int a, int b){
    int rootA = find(a);
    int rootB = find(b);

    parent[rootA] = rootB; // A그룹을 B그룹으로 합침
 
    int beforeSize = networkSize[rootA]; // 이전 사이즈
    networkSize[rootB] += beforeSize; // 합친뒤 사이즈
}

void init(){
    for(int i=0;i<=200002;i++){
        parent[i] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T--){
        map<string, int> name;
        int idx = 0;

        // 초기화
        fill(networkSize, networkSize+200002, 1);
        init();

        cin >> F;
        for(int i=0;i<F;i++){
            string name1, name2;
            cin >> name1 >> name2;
            
            // 이름을 node로 변환
            if(name.find(name1) == name.end()){ // map에 없으면 추가
                name.insert({name1, idx++});
            }
            if(name.find(name2) == name.end()){ // map에 없으면 추가
                name.insert({name2, idx++});
            }
            
            // 집합 합침
            int node1 = name.find(name1)->second;
            int node2 = name.find(name2)->second;

            if(find(node1) != find(node2)) uni(node1, node2); // 같은 집합이 아닐 경우에만 합침

            int root = find(node2);
            cout << networkSize[root] << "\n";
        }
    }

    

    return 0;
}