#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
1. 완전탐색
-> boj 시간초과 error
-> vector을 arr로 바꾸거나 cin,cout을 scanf,printf로 바꿔볼까 했지만 수행시간을 획기적으로 줄이기 위해서는 알고리즘(탐색방법)을 바꾸는 것이 나을듯

int main()
{
    int N, M, tmp, ans;
    vector<int> num_N, num_M;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        num_N.push_back(tmp);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> tmp;
        num_M.push_back(tmp);
    }

    for (int i = 0; i < M; i++)
    {
        ans = 0;
        for (int j = 0; j < N; j++)
        {
            if (num_M[i] == num_N[j])
                ans = 1;
        }
        cout << ans << '\n';
    }
}
*/

/*
 2. 이진탐색 (반복문으로 구현)

void Bsearch(vector<int> num, int target)
{
    int row, mid, high;
    row = 0;
    high = num.size() - 1;

    while (row <= high)
    {
        mid = (row + high) / 2;

        if (num[mid] == target)
        {
            cout << '1' << '\n';
            return;
        }
        else if (num[mid] > target)
            high = mid - 1;
        else
            row = mid + 1;
    }
    cout << '0' << '\n';
    return;
}

int main()
{
    int N, M, tmp, target;
    vector<int> num;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> target;
        Bsearch(num, target);
    }
}
*/

/* 아직 시간초과 error가 나므로 vector가 아닌 arr를 써보자
// 3. 이진탐색 (헤더 이용) + arr
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int N, M;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cin >> M;

    int target;
    for (int i = 0; i < M; i++)
    {
        cin >> target;
        if (binary_search(arr, arr + N, target) == true)
            cout << '1' << '\n';
        else
            cout << '0' << '\n';
    }
}
*/

/*
결론 : boj 시간초과 error에 대해

수행 시간을 줄이기 위해 알고리즘을 변경했음에도 시간초과 error가 해결되지 않았다.
찾아보니 vector가 array보다 느리기 때문에 이를 바꿔줬더니 해결되었다는 사례가 있어 arrary을 사용했지만 여전히 시간 초과였다.

저번에 c++ 입출력 함수 cin/cout 보다 scanf/printf가 더 빠르다는게 기억이 나서
cin/cout을 scanf/printf 만큼 빠르게 해주는 코드
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
를 추가해주니 시간초과가 해결되었다.

문제마다 다르겠지만 시간초과 이슈가 있을 때는
1. vector -> array로 바꾸거나
2. cin/cout -> scanf/printf로 바꾸거나
3. cin/cout을 사용하되
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
을 추가해주면 될 듯 하다.

참고 : https://ansohxxn.github.io/cpp/iospeed/
*/