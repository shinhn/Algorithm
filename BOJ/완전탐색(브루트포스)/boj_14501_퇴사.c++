#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
int con_T[16], con_P[16];

void func(int day, int pay){ // 현재 날짜, 전체 이익

    if(day > N){
        ans = max(ans, pay);
        return;
    }

    // day에 상담을 하는 경우
    if(day + con_T[day] - 1 <= N) func(day + con_T[day], pay + con_P[day]);
    // day에 상담을 하지 않는 경우
    if(day <= N) func(day + 1, pay);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> con_T[i] >> con_P[i];
    }

    func(1,0);

    cout << ans << '\n';

    return 0;
}