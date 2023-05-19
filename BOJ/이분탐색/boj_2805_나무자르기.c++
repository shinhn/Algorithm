#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long N, M, ans;
vector<int> tree;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(long long i=0;i<N;i++){
        long long t;
        cin >> t;
        tree.push_back(t);
    }

    long long l = 0, r = *max_element(tree.begin(), tree.end());

    while(l <= r){
        long long mid = (l+r)/2;
        long long sum = 0;
        
        for(long long i=0;i<tree.size();i++){
            if(tree[i] > mid) sum += (tree[i] - mid);
        }

        if(sum >= M){
            if(mid > ans) ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }

    cout << ans << "\n";

    return 0;
}