#include <iostream>

using namespace std;

/*
노드의 수는 10,000개 이하 -> 이진트리 이므로 -> 최대 20,000개의 노드 -> 배열로 불가능

입력 수 제한이 없는 경우 -> while (cin >> n)
*/

// 전역변수로 배열 선언할 경우 따로 해주지 않아도 처음 0으로 초기화됨 (이차원배열로 해보셈)

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
};

int n;

Node *addNode(Node *node, int key)
{
    if (node == NULL)
    {
        node = new Node();
        node->key = key;
        node->left = node->right = NULL;
    }
    else if (key < node->key)
        node->left = addNode(node->left, key);
    else
        node->right = addNode(node->right, key);
    return node;
}

void postOrder(Node *node)
{
    if (node == NULL) // 안넣어주면 재귀가 끝나지 않으므로 컴파일 에러
        return;

    postOrder(node->left);
    postOrder(node->right);
    cout << node->key << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Node *tree = NULL;

    while (cin >> n)
    {
        tree = addNode(tree, n);
    }

    postOrder(tree);
}