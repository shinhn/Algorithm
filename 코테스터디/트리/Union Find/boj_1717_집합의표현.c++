#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int u, a, b;
int parent[1000001];

int find(int node){ // 같은 집합인지 확인 (같은 뿌리인지 확인)
    if(parent[node] == node) return node; // 뿌리 노드일 경우 본인 리턴
    else return parent[node] = find(parent[node]); // 경로 압축 최적화
}

void uni(int a, int b){ // 합집합 (a 집합을 b 집합의 자식노드로 합침)
    int rootA = find(a);
    int rootB = find(b);

    parent[rootA] = rootB;
}

void init(){ // 부모 배열 초기화
    for(int i=0;i<=n;i++){
        parent[i] = i;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    init();

    for(int i=0;i<m;i++){
        cin >> u >> a >> b;

        if(u == 0){
            uni(a,b);
        }
        if(u == 1){ 
            if(find(a) == find(b)) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }

    return 0;
}