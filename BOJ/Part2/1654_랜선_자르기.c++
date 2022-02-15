#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
이미 가지고 있는 랜선의 개수 K
필요한 랜선의 개수 N

구하는 토막의 길이의 범위는 (1~가지고 있는 랜선의 최대 길이)

최소 길이인 1에서부터 최대 길이까지 랜선들을 나누어보면 되지만
비효율적이므로 토막의 길이를 최소와 최대 길이의 반으로 하여 랜선들을 나누어보는 식으로 탐색

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N;
    cin >> K >> N;

    vector<int> arr;

    for (int i = 0; i < K; i++)
    {
        int line;
        cin >> line;
        arr.push_back(line);
    }

    long long min = 1, max = *max_element(arr.begin(), arr.end());

    long long mid, cnt, ans;
    while (min <= max)
    {
        mid = (min + max) / 2;
        cnt = 0;

        for (int i = 0; i < K; i++)
        {
            cnt += arr[i] / mid;
        }

        if (cnt < N)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
            ans = mid;
        }
    }

    cout << ans;

    return 0;
}