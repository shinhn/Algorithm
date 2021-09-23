#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, k;
    cin >> t;
    while (t > 0)
    {
        t--;

        cin >> k;
        multiset<int> s;

        while (k > 0)
        {
            k--;

            char order;
            int input;
            cin >> order >> input;
            if (s.empty())
            {
                if (order == 'I')
                {
                    s.insert(input);
                }
            }
            else
            {
                if (order == 'I')
                {
                    s.insert(input);
                }
                else
                {
                    if (input == 1)
                    {
                        s.erase(--s.end());
                    }
                    else
                    {
                        s.erase(s.begin());
                    }
                }
            }
        }
        if (s.empty())
            cout << "EMPTY" << '\n';
        else
        {
            auto max = --s.end(), min = s.begin();
            cout << *max << ' ' << *min << '\n';
        }
    }
    return 0;
}

/*
deque ?
최대 최소를 구하기 위해서는 sort를 빈번하게 사용해야함

multiset
: front와 back 모두 삭제가 가능하고, set과 다르게 중복 데이터 또한 삽입이 가능하며, 자동으로 정렬

*/