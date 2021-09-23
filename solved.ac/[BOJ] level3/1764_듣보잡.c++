#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// 이진 탐색은 정렬된 리스트에 적용하기 좋은 탐색 방법이므로 미리 사전순으로 정렬한 뒤 탐색 할 예정

vector<string> v1;
vector<string> v2;
string tmp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    while (N > 0)
    {
        N--;
        cin >> tmp;
        v1.push_back(tmp);
    }

    sort(v1.begin(), v1.end());

    while(M>0)
    {
        M--;
        cin >> tmp;
        if(binary_search(v1.begin(), v1.end(), tmp) == 1)
        {
            v2.push_back(tmp);
        }
    }

    sort(v2.begin(), v2.end());

    cout << v2.size() << '\n';
    for(int i=0;i<v2.size();i++)
    {
        cout << v2[i] << '\n';
    }
}