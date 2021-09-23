#include <iostream>
#include <string>
#include <map>
using namespace std;

/*
1. vector + pair 이용
-> 시간초과
-> 이유 : vector에 pair로 저장할 경우 찾고자 하는 값을 반복문을 통해 찾아야 하므로 입력된 데이터가 많을 수록 시간 복잡도가 증가

int N, M;
vector<pair<string, int> > mon;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        pair<string, int> tmp;
        cin >> tmp.first;
        tmp.second = i;

        mon.push_back(tmp);
    }

    while (M > 0)
    {
        M--;
        string tmp;
        cin >> tmp;

        if (tmp[0] >= '1' && tmp[0] <= '9')
        {
            for (int i = 0; i < N; i++)
            {
                if (mon[i].second == stoi(tmp))
                {
                    cout << mon[i].first << '\n';
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (mon[i].first == tmp)
                {
                    cout << mon[i].second << '\n';
                    break;
                }
            }
        }
    }
}
*/

/*
2. map 이용
선언 : map<Key, Type> m
*/
map<string, int> mon; // 이름을 입력 받았을 때 이름을 key 값을 가진 정수를 바로 출력 (for문으로 탐색 필요 없음)
string mon2[100001];  // 정수를 입력 받았을 때 해당 인덱스의 이름을 바로 출력할 배열
int N, M;
string tmp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;

        mon2[i] = tmp;
        mon.insert(make_pair(tmp, i + 1));
    }

    while (M > 0)
    {
        M--;

        cin >> tmp;

        if (isdigit(tmp[0]))
        {
            cout << mon2[stoi(tmp) - 1] << '\n';
            // 아스키코드 변환 "tmp[0] - '0' - 1" 으로 했을때 출력 값은 동일 한데 boj에서 틀린 답으로 측정됨..이유를 모르겠음
            // 문자(열) -> int형 변환할 때 안전하게 stoi() 를 사용하는게 나을듯
            // 저번 문제에서는 문제 없었던 것으로 보아 int형 -> 문자(열)은 아스키코드 변환 방법으로 해도 되는듯
        }
        else
        {
            cout << mon[tmp] << '\n';
        }
    }
}