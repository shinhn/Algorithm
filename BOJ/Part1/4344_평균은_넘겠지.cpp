#include <iostream>

using namespace std;

int main()
{

    /*
    1 ≤ N ≤ 1000, N은 정수
    점수는 0보다 크거나 같고, 100보다 작거나 같은 정수
    */

    int test_case, N, score[1000], cnt;
    double avg, ans;

    cin >> test_case;

    while (test_case--)
    {
        avg = 0;
        cnt = 0;
        ans = 0;

        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> score[i];
            avg += score[i];
        }

        avg = avg / N;

        for (int i = 0; i < N; i++)
        {
            if (score[i] > avg)
                cnt++;
        }

        ans = ((double)cnt / N) * 100;

        cout.precision(3);
        cout << fixed;
        cout << ans << '%' << '\n';
    }

    return 0;
}