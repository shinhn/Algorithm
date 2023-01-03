#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
n은 10만 이하이기 때문에 시간에 유의해야함.
2개씩 일일이 곱해서 모든 합을 구하면 분명 시간 초과가 날것.

규칙 찾기
x1x2 + x1x3 + x1x4 + x2x3 + x2x4 + x3x4 + ...
= x1(x2 + x3 + x4) + x2(x3 + x4) + x3(x4) + ...

-> 누적합 이용

a[i] = s[i] - s[i-1] 
s[i] = a[i] + s[i-1]
*/

vector<long long> arr;
vector<long long> s; // 누적합
long long ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    s.push_back(0);

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        arr.push_back(num);

        s.push_back(s[i-1] + num);
    }

    for(int i=1;i<=n-1;i++){
        ans += arr[i-1]*(s[n]-s[i]);
    }

    cout << ans << "\n";

    return 0;
}