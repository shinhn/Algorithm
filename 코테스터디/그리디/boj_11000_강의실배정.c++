#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
priority_queue<int, vector<int>, greater<int>> c_end_time; // 각 강의실의 강의가 끝나는 시간

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        int s, t;
        cin >> s >> t;
        pq.push({s,t});
    }

    // 제일 처음 시작하는 강의 -> 강의실 배정
    c_end_time.push(pq.top().second);
    pq.pop();

    while(!pq.empty()){
        int s = pq.top().first;
        int e = pq.top().second;
        pq.pop();

        int cur = c_end_time.top();

        if(cur <= s){ // 기존의 가장 빨리 끝나는 강의실의 강의가 종료되어 배정이 가능한 경우 -> 기존 강의실을 비우고 배정
            c_end_time.pop();
            c_end_time.push(e);
        }
        else{ // 배정 가능한 강의실이 없는 경우 -> 새로 배정
            c_end_time.push(e);
        }
    }

    cout << c_end_time.size() << '\n';

    return 0;
}