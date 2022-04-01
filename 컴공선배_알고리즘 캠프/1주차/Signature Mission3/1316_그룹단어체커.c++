#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt = 0;
    cin >> N;

    for(int i=0;i<N;i++){
        string str;
        cin >> str;

        int alpa[26];
        bool flag = true; // 그룹 단어인지 아닌지
        fill(alpa, alpa + 26, 0);

        for (int j = 0; j < str.length(); j++)
        {
            if (alpa[int(str[j] - 'a')] != 0)
            {
                flag = false;
                break;
            }
            alpa[int(str[j] - 'a')]++;

            while (j < str.length()-1 && str[j] == str[j + 1])
            {
                j++;
            }
        }

        if (flag == true)
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}