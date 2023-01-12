#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
1 ≤ X ≤ 1,000,000,000 이므로 승률(Z)이 변하는 값을 선형탐색하여 찾으려면 시간초과가 남
따라서 이진탐색 이용
*/

long long X, Y, Z;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> X >> Y;

    Z = Y*100/X;

    if(Z >= 99){ // 99%는 아무리 해도 100%가 되지 못한다.
        cout << -1 << "\n";
        return 0;
    }

    long long left=0, right=1000000000, ans;
    while(left <= right){
        long long mid = (left + right)/2;

        long long win_per = (Y+mid)*100/(X+mid);
        if(win_per <= Z) left = mid + 1;
        else {
            ans = mid;
            right = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}