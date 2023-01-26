#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int N;
int parent[300001];

int find(int node){
    if(parent[node] == node) return node;
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

    cin >> N;

    init();

    for(int i=0;i<N-2;i++){
        int a,b;
        cin >> a >> b;
        uni(a,b);
    }
    
    // 서로 다른 집합 2개 중에 아무 원소나 하나씩 고르면 됨
    int root1, root2;
    root1 = find(1);
    for(int i=2;i<=N;i++){
        int root = find(i);
        if(root != root1){
            root2 = root;
            break;
        }
    }

    cout << root1 << " " << root2 << "\n";

    return 0;
}