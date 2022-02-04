#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int alps[26] = {0};

    // 대소문자를 구별하지 않고, 출력값은 대문자이므로 모두 대문자 변경
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }

        int alp = str[i] - 'A';
        alps[alp] += 1;
    }

    // 알파벳 카운팅 확인
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << (char)(i + 'A') << " : " << alps[i] << '\n';
    // }

    int max = 0, max_idx = 0, cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (alps[i] > max)
        {
            max = alps[i];
            max_idx = i;
            cnt = 0;
        }
        if (alps[i] == max)
        {
            cnt ++;
        }
        // cout << char(max_idx + 'A') << ' ' << cnt << '\n';
    }

    if (cnt > 1)
        cout << '?';
    else
        cout << char(max_idx + 'A');

    return 0;
}