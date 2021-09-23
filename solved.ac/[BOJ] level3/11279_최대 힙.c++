#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> heap;

    int N, x, tmp;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x == 0)
        {
            if (heap.empty())
                cout << 0 << '\n';
            else
            {
                cout << heap.top() << '\n';
                heap.pop();
            }
        }
        else
        {
            heap.push(x);
        }
    }
}

/*
힙(Heap)

- 주어진 데이터들 중에서 특정 기준에 부합하는 '최댓값' 혹은 '최솟값'을 빠르게 찾아낼 수 있는 자료구조
    -> 빠른 이유 : 단순히, 순차탐색으로 최댓값 최솟값을 찾을 경우, N번 만큼의 탐색을 해주어야 한다.
                N 값이 커지면 커질수록 너무나도 많은 시간이 걸릴 수 밖에 없다.
                하지만, 힙 같은 경우 삽입시 logN, 즉 트리의 높이만큼만 비교를 하게 된다.
                따라서, 시간복잡도가 O(logN) 으로 N번만큼의 탐색을 하는 순차탐색에 비해서 더 빠른 것이다.

- '완전이진트리(Complete Binary Tree)' 기반 : 하나의 부모당 자식이 최대 2개까지만 존재하는 트리 중에서 왼쪽부터 차례대로 삽입된 형태를 가진 트리

- 최대힙 : 부모노드의 값이 자식노드의 값보다 큰 관계일 때
- 최소힙 : 부모노드의 값이 자식노드의 값보다 작은 관계일 때


priority_queue (우선 순위 큐)
일반 큐와 다르게 자동으로 내림차순 정렬되어 삽입
-> Heap의 삽입, 삭제 함수를 일일이 구현할 필요가 없음

*/