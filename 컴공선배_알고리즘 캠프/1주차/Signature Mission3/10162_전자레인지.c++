#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A = 5 * 60, B = 60, C = 10, T, a = 0, b = 0, c = 0;
    cin >> T;

    while (1)
    {
        if (T >= A)
        {
            a += T / A;
            T = T % A;
        }
        else if (T >= B)
        {
            b += T / B;
            T = T % B;
        }
        else
        {
            if (T % C != 0) // 3개의 버튼으로 시간을 정확히 맞출 수 없는 경우
            {
                cout << "-1"
                     << "\n";
                return 0;
            }
            c += T / C;
            break;
        }
    }

    cout << a << " " << b << " " << c << "\n";
    return 0;
}