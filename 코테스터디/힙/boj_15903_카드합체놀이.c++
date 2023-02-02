#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int n, m;
priority_queue<long long, vector<long long>, greater<long long>> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i=0;i<n;i++){
        long long card;
        cin >> card;
        pq.push(card);
    }

    for(int i=0;i<m;i++){
        long long c1 = pq.top();
        pq.pop();
        long long c2 = pq.top();
        pq.pop();

        long long result = c1 + c2;
        pq.push(result);
        pq.push(result);
    }

    long long ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
    }

    cout << ans << "\n";


    return 0;
}