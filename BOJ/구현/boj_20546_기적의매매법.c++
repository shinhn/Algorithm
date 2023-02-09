#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
준현 : 살 수 있다면 가능한 만큼 즉시 매수

성민 : 빚을 내지 않음
3일 연속 가격이 전일 대비 상승하는 주식은 다음날 무조건 가격이 하락한다고 가정 -> 현재 소유한 주식의 가격이 3일째 상승한다면, 전량 매도
3일 연속 가격이 전일 대비 하락하는 주식은 다음날 무조건 가격이 상승한다고 가정 -> 이러한 경향이 나타나면 즉시 주식을 전량 매수
*/

int cash_j, cash_s, j, s, result_j, result_s;
int list[15];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cash;
    cin >> cash;
    cash_j = cash;
    cash_s = cash;

    for(int i=1;i<=14;i++){
        cin >> list[i];
    }

    for(int i=1;i<=14;i++){
        if(list[i] <= cash_j){
            j += cash_j / list[i];
            cash_j = cash_j % list[i];
        }
    }

    result_j = cash_j + j*list[14];

    for(int i=4;i<=14;i++){
        if(list[i-3] > list[i-2] && list[i-2] > list[i-1] && list[i-1] > list[i] && list[i] <= cash_s){
            s += cash_s / list[i];
            cash_s = cash_s % list[i];
        }
        if(list[i-3] < list[i-2] && list[i-2] < list[i-1] && list[i-1] < list[i] && s != 0){
            cash_s = s * list[i];
            s = 0;
        }
    }

    result_s = cash_s + s*list[14];

    if(result_j > result_s) cout << "BNP\n";
    else if(result_j < result_s) cout << "TIMING\n";
    else cout << "SAMESAME\n";
    
    return 0;
}