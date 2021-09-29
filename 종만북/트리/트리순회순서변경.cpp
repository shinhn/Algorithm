#include <iostream>
#include <algorithm> // find()
#include <vector>

using namespace std;

/*
전위순회 preorder
중위순회 inorder
후위순회 postorder
*/

vector<int> slice(const vector<int> &v, int a, int b)
{
    return vector<int>(v.begin() + a, v.begin() + b);
}

void printPostOrder(const vector<int> &preorder, const vector<int> &inorder)
{
    // N : 순회 사이즈
    const int N = preorder.size();

    // 벡터가 비면 곧장 종료
    if (preorder.empty())
        return;

    // 전위 순회는 루트부터 탐색하므로 전위 순회 순서 첫번째는 루트
    const int root = preorder[0];

    // 중위순회는 root가 중간에 있으므로 (왼쪽 서브트리 크기) = (루트 index) - (시작 index)
    const int L = find(inorder.begin(), inorder.end(), root) - inorder.begin();
    const int R = N - L - 1;

    // 재귀 호출을 통해 각 서브트리를 후위 순회한 결과를 출력
    // 왼 -> 오 -> 루트
    printPostOrder(slice(preorder, 1, L + 1), slice(inorder, 0, L));
    printPostOrder(slice(preorder, L + 1, N), slice(inorder, L + 1, N));

    // 마지막으로 루트 번호 출력
    cout << root << ' ';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; // 노드의 수
    vector<int> preorder, inorder;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        preorder.push_back(tmp);
    }

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        inorder.push_back(tmp);
    }

    printPostOrder(preorder, inorder);
}

/*
1
7
27 16 9 12 54 36 72
9 12 16 27 36 54 72
*/