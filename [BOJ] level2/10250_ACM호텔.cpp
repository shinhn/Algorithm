#include <iostream>
#include <cmath>
using namespace std;

// 엘리베이터에서 가장 가까운 방 선호 -> 거리 같을 경우 아래층을 선호

int main()
{
    int T;
    cin >> T;

    for (int i=0 ; i<T ; i++)
    {
        int H,W,N;
        int floor,num; // 배정된 방의 위치    
        cin >> H >> W >> N;



        floor = N % H;
        if(floor == 0) floor = H;

        num = ceil(float(N) / H) ; 

        int room = floor * 100 + num;
        cout << room << endl;
        
        
    }
}

// 나눗셈(/)의 결과값을 소수형으로 반환하고 싶으면 float(a) / b 형식으로 써야 함
// ceil : 올림함수, floor : 내림함수