#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N,K,Q,M;
int check[5004];
int pSum[5004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K >> Q >> M;

    for(int i=0;i<K;i++){
        int n;
        cin >> n;
        check[n] = -1;
    }

    for(int i=0;i<Q;i++){
        int n;
        cin >> n;

        if(check[n] == 0){
            for(int j=n;j<=N+2;j+=n){
                if(check[j] != -1) check[j] = 1;
            }
        }
    }

    for(int i=3;i<=N+2;i++){
        if(check[i] != 1) pSum[i] = pSum[i-1] + 1;
        else pSum[i] = pSum[i-1];
    }

    for(int i=0;i<M;i++){
        int s,e;
        cin >> s >> e;
        cout << pSum[e] - pSum[s-1] << "\n";
    }

    return 0;
}