#include <iostream>

using namespace std;

int tree[27][2];

void preOrder(int node)
{
    if (node == -1)
        return;
    cout << char(node + 'A');
    preOrder(tree[node][0]);
    preOrder(tree[node][1]);
}

void inOrder(int node)
{
    if (node == -1)
        return;
    inOrder(tree[node][0]);
    cout << char(node + 'A');
    inOrder(tree[node][1]);
}

void postOrder(int node)
{
    if (node == -1)
        return;
    postOrder(tree[node][0]);
    postOrder(tree[node][1]);
    cout << char(node + 'A');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char parent, left, right;

        cin >> parent >> left >> right;

        if (left == '.')
            tree[parent - 'A'][0] = -1;
        else
            tree[parent - 'A'][0] = left - 'A';

        if (right == '.')
            tree[parent - 'A'][1] = -1;
        else
            tree[parent - 'A'][1] = right - 'A';
    }

    preOrder(0);
    cout << "\n";
    inOrder(0);
    cout << "\n";
    postOrder(0);

    return 0;
}