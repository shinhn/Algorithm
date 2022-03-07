#include <iostream>

using namespace std;

int N, M; // N : 지방의 수 / M : 총 예산
int low = 0, high = 0; // low : 예산 최솟값 / high : 예산 최댓값
int arr[100001];            // 각 지방의 예산요청

bool isPossible(int mid)
{
    int sum = 0;
    for(int i=0;i<N;i++)
    {
        if(arr[i] < mid) sum += arr[i];
        else sum += mid;
    }

    if(sum <= M) return true;
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
        high = max(high, arr[i]);
    }

    cin >> M;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(isPossible(mid)) low = mid + 1; // 가능하면 최소 예산 늘림
        else high = mid - 1; // 불가능하면 최대 예산 줄임
    }

    cout << high;

    return 0;
}