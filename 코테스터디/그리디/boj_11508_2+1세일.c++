#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
vector<int> arr;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end(), cmp);

    for(int i=0;i<N;i++){
        if(i%3 == 2) continue; // 3개를 한묶음으로 보고, 묶음의 마지막 제품(3번째 -> idx로는 2)은 무료이므로 합에 더하지 않음
        ans += arr[i];
    }

    cout << ans << '\n';

    return 0;
}