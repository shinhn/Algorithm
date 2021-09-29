#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int TestCase, N, a, b;
/*
N : 수열의 길이
a,b : 수열을 생성하는 데 필요한 두 정수

A[0] = 1983
A[i] = (A[i-1]*a + b)mod 20090711

숫자들을 정렬한 뒤 앞의 절반을 최대 힙에, 뒤의 절반을 최소 힙에 넣음
(조건)
1. 최대 힙의 크기는 최소 힙의 크기와 같거나, 하나 더 크다.
2. 최대 힙의 최대 원소는 최소 힙의 최소 원소보다 작거나 같다.
(결론)
=> 중간 값은 항상 최대 힙의 루트에 위치
*/

int median()
{
    long long seed = 1983;
    /*
    priority_queue<T, Container, Compare>
    : 원하는 자료형 및 클래스 T를 통해 생성.
    여기서 Container는 vector와 같은 컨테이너이며
    Compare는 비교함수 클래스
    */
    priority_queue<int, vector<int>, less<int> > MaxHeap;
    priority_queue<int, vector<int>, greater<int> > MinHeap;

    int medSum = 0;

    for (int i = 0; i < N; i++)
    {
        if (MaxHeap.size() == MinHeap.size()) // 1번 조건 만족을 위해
        {
            MaxHeap.push(seed);
        }
        else
        {
            MinHeap.push(seed);
        }

        if (!MaxHeap.empty() && !MinHeap.empty() && MaxHeap.top() > MinHeap.top()) // 2번 조건을 불만족 했을 경우 바로 잡음
        {
            int tmp_a = MaxHeap.top();
            int tmp_b = MinHeap.top();

            MaxHeap.pop();
            MinHeap.pop();

            MaxHeap.push(b);
            MinHeap.push(a);
        }

        // 1,2번 조건을 만족할 경우, 중간 값은 항상 최대 힙의 루트에 위치
        medSum = (medSum + MaxHeap.top()) % 20090711;
        seed = (seed * a + b) % 20090711;
    }

    return medSum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> TestCase;
    while (TestCase--)
    {
        cin >> N >> a >> b;
        cout << median() << '\n';
    }

    return 0;
}