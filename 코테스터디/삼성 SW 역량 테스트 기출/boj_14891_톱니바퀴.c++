#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

/*
서로 맞닿은 톱니의 극이 다르다면, 옆 톱니가 회전한 방향과 반대방향으로 회전
*/

deque<int> w[5];
int K, N, D, sum;

void turn1(int num, int d){ // 시계 방향 회전
    int n = w[num].back();
    w[num].pop_back();
    w[num].push_front(n);
}

void turn2(int num, int d){ // 반시계 방향 회전
    int n = w[num].front();
    w[num].pop_front();
    w[num].push_back(n);
}

vector<pair<int, int>> find_turn_ws(){ // 회전해야 하는 톱니 번호 구함
    vector<pair<int, int>> turn_ws; // 회전 톱니 번호, 방향

    deque<int> before = w[N];
    int before_turn = D;

    for(int i=N+1;i<=4;i++){ // 기준 톱니의 오른쪽 톱니들
        if(before[2] != w[i][6]){
            if(before_turn == 1){
                turn_ws.push_back({i, -1});
                before = w[i];
                before_turn = -1;
            }
            else{
                turn_ws.push_back({i, 1});
                before = w[i];
                before_turn = 1;
            }
        }
        else break;
    }

    before = w[N];
    before_turn = D;

    for(int i=N-1;i>=1;i--){ // 기준 톱니의 왼쪽 톱니들
        if(before[6] != w[i][2]){
            if(before_turn == 1){
                turn_ws.push_back({i, -1});
                before = w[i];
                before_turn = -1;
            }
            else{
                turn_ws.push_back({i, 1});
                before = w[i];
                before_turn = 1;
            }
        }
        else break;
    }

    return turn_ws;
}

void print_dq(deque<int> dq[5]){
    cout << "\n";
    for(int i=1;i<=4;i++){
        while(!dq[i].empty()){
            cout << dq[i].front() << " ";
            dq[i].pop_front();
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1;i<=4;i++){
        string str;
        cin >> str;
        for(int j=0;j<str.length();j++){
            w[i].push_back(str[j]-'0');
        }
    }

    // deque<int> dq[5];
    // for(int i=1;i<=4;i++){
    //     dq[i] = w[i];
    // }
    // print_dq(dq);

    cin >> K;
    while(K--){
        cin >> N >> D;

        vector<pair<int, int>> turn_ws = find_turn_ws();
        // for(int i=0;i<turn_ws.size();i++){
        //     cout << "<" << turn_ws[i].first << ", " << turn_ws[i].second << ">\n";
        // }
        turn_ws.push_back({N,D});

        for(int i=0;i<turn_ws.size();i++){
            if(turn_ws[i].second == 1) turn1(turn_ws[i].first, turn_ws[i].second);
            else turn2(turn_ws[i].first, turn_ws[i].second);
        }

        // for(int i=1;i<=4;i++){
        //     dq[i] = w[i];
        // }
        // print_dq(dq);
    }

    if(w[1][0] == 1) sum += 1;
    if(w[2][0] == 1) sum += 2;
    if(w[3][0] == 1) sum += 4;
    if(w[4][0] == 1) sum += 8;

    cout << sum << "\n";

    return 0;
}