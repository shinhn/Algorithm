#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;
long long dp[31][31]; // dp[w][h] : 온전한 알약 w, 반 조각 알약 h개 일때 만들 수 있는 문자열의 수

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> N;
        if(N == 0) break;

        for(int w=0;w<=N;w++){
            for(int h=0;h<=N;h++){
                if(w==0){ // 온전한 알약 w 가 없는 경우, 반 조각 알약을 먹는 경우 한가지 밖에 없음
                    dp[w][h] = 1;
                }
                else{ // 온전한 알약 w 가 있는 경우
                    if(h==0){ // 반 조각 알약 h 가 없을 경우, 온전한 알약 w를 반 먹고 반조각 하나 추가해주는 경우 밖에 없음
                        dp[w][h] = dp[w-1][1];
                    }
                    else{ // 이외에는 온전한 알약 w를 반 먹고 반조각 하나 추가하거나, 반조각 먹는 경우 2가지
                        dp[w][h] = dp[w-1][h+1] + dp[w][h-1];
                    }
                }
            }
        }

        cout << dp[N-1][1] << "\n"; // 첫날에 약 하나를 꺼내 반으로 쪼개서 한 조각은 먹고, 다른 조각은 다시 병에 넣음
    }

    return 0;
}