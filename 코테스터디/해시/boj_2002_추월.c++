#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

// 백준에 해시라고 분류되어 있긴한데 문제를 보고 queue가 떠올라 queue로 품

int N, cnt, ans;
queue<string> que;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=0;i<N;i++){
        string car;
        cin >> car;
        que.push(car);
    }

    for(int i=1;i<=N;i++){
        string car;
        cin >> car;

        if(que.front() == car) que.pop();
        else{
            ans ++;
            string first_car = que.front();

            // 앞지른 차 앞에 있는 차들을 다시 순서 뒤로 넣어줌
            while(que.front() != car){
                string tmp = que.front();
                que.pop();
                que.push(tmp);
            }

            // 앞지른 차 터널 통과
            que.pop();

            // 원래 맨 앞에 있던 차를 다시 맨 앞으로 되돌림
            while(que.front() != first_car){
                string tmp = que.front();
                que.pop();
                que.push(tmp);
            }
        }
    }

    cout << ans << "\n";

    return 0;
}