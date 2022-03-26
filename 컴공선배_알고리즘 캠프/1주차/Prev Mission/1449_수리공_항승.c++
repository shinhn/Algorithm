#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L, cnt = 0;
    cin >> N >> L;
    int position[1001]; // 물이 새는 곳의 좌표

    for (int i = 0; i < N; i++)
    {
        cin >> position[i];
    }

    sort(position, position + N);

    // 가상의 좌표를 만들어 테이프 붙인곳 표시
    bool coord_tape[1001];

    for (int i = 0; i < N; i++)
    {
        if (coord_tape[position[i]] == false) // 물이 새는 곳에 테이프가 안붙어있는 경우
        { 
            for (int j = position[i]; j < position[i] + L; j++)
            {
                coord_tape[j] = true;
            }
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}