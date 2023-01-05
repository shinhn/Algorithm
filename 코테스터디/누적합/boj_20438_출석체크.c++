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

        for(int j=1;j*n <= N+2;j++){
            if(check[n] == -1) continue;
            check[j*n] = 1;
        }
    }

    cout << "\n";
    for(int i=0;i<=N+2;i++){
        cout << i << " ";
    }
    
    cout << "\n";
    for(int i=0;i<=N+2;i++){
        cout << check[i] << " ";
    }
    cout << "\n";

    if(check[3] == -1 ||check[3] == 0) pSum[3] = 1;

    for(int i=4;i<=N+2;i++){
        if(check[i] == 0 || check[i] == -1) pSum[i] = pSum[i-1] + 1;
        else pSum[i] = pSum[i-1];
    }

    for(int i=0;i<=N+2;i++){
        cout << pSum[i] << " ";
    }
    cout << "\n";

    for(int i=0;i<M;i++){
        int s,e;
        cin >> s >> e;
        if(s-1 >= 3) cout << pSum[e] - pSum[s-1] << "\n";
        else cout << pSum[e] << "\n";
    }

    return 0;
}