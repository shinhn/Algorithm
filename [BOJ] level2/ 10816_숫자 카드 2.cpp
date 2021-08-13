#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector<int> arr;
    vector<int> target;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        int cnt = upper_bound(arr.begin(), arr.end(), x) - lower_bound(arr.begin(), arr.end(), x);
        cout << cnt << " ";
    }
}
/*
1. Lower bound
선형 구조의 부분 탐색법이다. 이분 탐색과 거의 다를 게 없다.
만약 target 값이 있다면 target 값보다 같거나 큰 첫 번째 위치를 말한다.

 
2. Upper bound
target 값보다 큰 첫번째 위치를 말한다.

Lower bound와 차이점 하나만 기억하면 된다.

Lower bound는 이상(<=)
Upper bound는 초과(<)

예를들어 {1,2,3,3,4}란 배열이 있다.
여기서 target은 3일 때 Lower bound와 Upper bound의 값은 무엇일까?

Lower bound(이상) = 2 (index=위치)
Upper bound(초과) = 4 (index=위치)
*/
