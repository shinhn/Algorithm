#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, S, ans;
int arr[20];

void func(int idx, int total){
    if(idx == N){
        if(total == S) ans ++;
        return;
    }

    func(idx+1, total); // 미포함
    func(idx+1, total + arr[idx]); // 포함
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    func(0,0);

    if(S == 0) ans--; // 공집합
    cout << ans << "\n";

    return 0;
}