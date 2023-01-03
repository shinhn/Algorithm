#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
수의 개수 N과 합을 구해야 하는 횟수 M이 최대 100,000 이므로
단순 반복문으로 풀면 100,000 * 100,000으로 시간초과

-> 구간합 이용
*/

int N, M;
vector<int> arr;
vector<int> s; // 구간합

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N >> M;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        arr.push_back(num);

        if(i==0)s.push_back(num);
        if(i>=1)s.push_back(num + s[i-1]);
    }

    for(int i=0;i<M;i++){
        int x,y;
        cin >> x >> y;
        cout << s[y-1] - s[x-2] << "\n";
    }

    return 0;
}