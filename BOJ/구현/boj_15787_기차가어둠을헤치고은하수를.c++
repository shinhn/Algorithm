#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
접근 1 : 열차마다 deque를 사용하여 좌석 상태를 관리 -> 지나간 열차들과 현재 열차를 비교하여 지나갈 수 있는지 판단할 때 시간초과 (100000 * 100000)
접근 2(풀이 참고) : 좌석의 상태는 0과 1이라 볼 수 있고, deque 처럼 모든 좌석을 옆으로 밀 수 있어야 함 -> 비트마스킹으로 구현
*/

int N, M, ans;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int op, n, x;
        cin >> op >> n;
        if(op == 1 || op == 2){
            cin >> x;
        }

        if(op == 1){
            
        }
        else if(op == 2){
            
        }
        else if(op == 3){
            
        }
        else if(op == 4){
            
        }
    }



    return 0;
}