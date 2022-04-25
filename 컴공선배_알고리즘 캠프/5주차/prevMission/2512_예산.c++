#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[10001], N, M, sum = 0;
int low, high, mid;

bool is_possible()
{
    sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > mid)
            sum += mid;
        else
            sum += arr[i];
    }
    
    // cout << "sum : " << sum << " high : " << high << " mid : " << mid << "\n";

    if (sum <= M)
        return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> M;

    if (sum <= M) // 모든 요청이 배정될 수 있는 경우
    {
        cout << *max_element(arr, arr + N) << "\n";
        return 0;
    }

    sort(arr, arr+N);
    
    low = 1;
    high = arr[N-1];
    mid = (low + high) / 2;

    while (low <= high) // high : 4, low : 4 일때 high(=mid)도 판별해봐야 하므로 < 가 아닌, <= 까지 반복문 수행
    {
        if (is_possible())
        {
            low = mid+1;
            mid = (low + high) / 2;
        }
        else
        {
            high = mid-1;
            mid = (low + high) / 2;
        }
    }
    
    cout << high << "\n";

    return 0;
}