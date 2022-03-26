#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, cnt=0;
    cin >> N >> K;
    vector<int> coin;

    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        coin.push_back(tmp);
    }

    sort(coin.begin(), coin.end(), cmp);

    for (int i = 0; i < N; i++)
    {
        if(K/coin[i] == 0)continue;
        cnt += K/coin[i];
        K = K%coin[i];
    }

    cout << cnt;

    return 0;
}