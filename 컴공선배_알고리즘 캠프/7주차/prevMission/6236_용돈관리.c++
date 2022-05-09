#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M;
int money[100001];
int high, low, mid, ans;

bool is_possible(int mid){
    int curMoney = 0;
    int cnt = 0;

    for(int i=0;i<N;i++){
        if(money[i] > mid) return false; // 인출해도 안되는 상황
        if(curMoney - money[i] < 0) { // 인출
            curMoney = mid;
            cnt++;
        }
        curMoney -= money[i];
    }

    if(cnt <= M) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> money[i];
        high += money[i];
    }

    low = *max_element(money, money + N);

    while(low <= high){
        mid = (high + low) / 2;

        if(is_possible(mid)){
            ans = mid;
            high = mid - 1; 
        }
        else{
            low = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}