#include <iostream>
using namespace std;

int main(){
    int w; // 버스크기
    int park[] = {1,2,3,3,5,1,0,1,3};
    cin >> w;

    // 0. 일반적인 방법 - O(N*w)
    // 이중 for문으로 한칸씩 이동하면서 w개의 data 합을 구하면서 최솟값을 구한다

    // 1. <sliding window> - O(N)

    int s = 0; // 구간의 시작점
    int e = 0; // 구간의 끝점
    int sum = 0; // 구간내 합
    int ans = 5567890; // w크기 구간들 중 합이 가장 작은 값

    while(e<9){ // 정상 구간
        sum += park[e]; // 구간에 data 추가

        if(e-s+1 >= w){ // e-s+1 : s~e 까지의 data 개수
            if(sum < ans) ans = sum;

            sum -= park[s]; // 앞의 data 삭제
            s++; // 시작점 당기기
        }

        e++; // 끝점 미루기
    }

    cout << ans;

    // 2. <prefix> - O(N)

    int prefix[9] = {0,}; // 0~index까지의 합
    int sum = 0;

    for(int i=0;i<9;i++){ // 전처리
        sum += park[i];
        prefix[i] = sum;
    }
    
    int s = 0;
    int e = w-1;
    int ans = 5567890;

    while(e<9){
        int cal =  prefix[e] - prefix[s] + park[s];
        if(ans > cal) ans = cal;
        s++;
        e++;
    }

    cout << ans;

    return 0;
}