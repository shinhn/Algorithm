#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2)
{
    if (s1.length() < s2.length())
        return true;
    else if (s1.length() == s2.length())
        return s1 < s2;
    else
        return false;
}

int main()
{
    vector<string> str;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        str.push_back(tmp);
    }

    sort(str.begin(), str.end(), cmp);

    cout << str[0] << '\n';
    for (int i = 1; i < N; i++)
    {
        if (str[i] != str[i - 1])
            cout << str[i] << '\n';
    }
}

/*
1. Vector
C++ 표준 라이브러리(Standard Template Library)에 있는 컨테이너로 사용자가 손쉽게 사용하기 위해 정의된 class이다.

Vector의 가장 큰 장점은 동적으로 원소를 추가할 수 있으며 크기가 자동으로 늘어난다는 점이다.
쉽게 말해 크기가 가변적으로 변하는 배열이다.
-> 이번 문제에서 문자열 크기의 제한이 없으므로 일반 배열을 사용할 수 없다. -> vector 동적 배열 사용

속도적인 측면에서는 배열에 비해 떨어지지만 메모리를 효율적으로 관리할 수 있다는 장점이 있어 굉장히 많이 사용한다.
vector는 배열과 마찬가지로 원소들이 하나의 메모리 블록에 연속하게 저장된다.
그렇기에 원소가 추가되거나 삽입될 때 메모리 재할당이 발생할 수 있고 상당한 부하가 발생하게 된다는 점은 단점으로 꼽히고 있다.




2. sort
#include <algorithm> -> vscode에서는 헤더가 없어도 실행이 되지만 boj에서는 헤더를 추가해주지 않으면 compile error.

sort(배열 시작 위치, 끝 위치, 비교조건함수)

비교조건함수에서 true로 return할 경우 위치를 바꾸지 않고,
false로 return할 경우 위치를 바꾼다.
*/