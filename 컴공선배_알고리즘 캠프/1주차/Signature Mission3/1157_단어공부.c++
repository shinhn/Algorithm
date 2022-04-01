#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int alp[26];
    fill(alp, alp + 26, 0);

    string str;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= ('a'-'A'); // 대문자로 변환
        alp[int(str[i] - 'A')]++; // 카운트
    }

    int max_alp_idx = -1, max_cnt = -1, flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max_cnt < alp[i]){
            max_alp_idx = i;
            max_cnt = alp[i];
            flag = 0;
        }
        if (max_cnt == alp[i])
            flag ++; // 가장 많이 사용된 알파벳이 여러 개 존재하는 경우 판별
    }

    if (flag >= 2)
        cout << "?" << "\n"; // 위 반복문 첫번째 조건문에서 flag가 ++ 된 후 아래 주건문에 들어가므로 가장 많이 사용된 알파벳이 여러 개 존재하는 경우는 flag가 2부터
    else
        cout << char(max_alp_idx + 'A') << "\n";

    return 0;
}