#include <iostream>
#include <vector>

using namespace std;

int N; // 노드 개수

/*
처음에 l,r을 char로 하려고 했으나
preorder, inoder, postorder 함수에서 재귀를 사용하기 위해 아스키 코드로 변환하여 int로 받음
*/
struct node
{
    int l, r;
};

void preorder(node nodes[], int cur)
{
    cout << (char)(cur + 'A');
    if (nodes[cur].l != -1)
    {
        preorder(nodes, nodes[cur].l);
    }
    if (nodes[cur].r != -1)
    {
        preorder(nodes, nodes[cur].r);
    }
}

void inorder(node nodes[], int cur)
{
    if (nodes[cur].l != -1)
    {
        inorder(nodes, nodes[cur].l);
    }
    cout << (char)(cur + 'A');
    if (nodes[cur].r != -1)
    {
        inorder(nodes, nodes[cur].r);
    }
}

void postorder(node nodes[], int cur)
{
    if (nodes[cur].l != -1)
    {
        postorder(nodes, nodes[cur].l);
    }
    if (nodes[cur].r != -1)
    {
        postorder(nodes, nodes[cur].r);
    }
    cout << (char)(cur + 'A');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    node nodes[N];

    for (int i = 0; i < N; i++)
    {
        nodes[i].l = -1;
        nodes[i].r = -1;
    }

    for (int i = 0; i < N; i++)
    {
        char node, l, r;
        cin >> node >> l >> r;

        if (l != '.')
        {
            nodes[node - 'A'].l = l - 'A';
        }
        if (r != '.')
        {
            nodes[node - 'A'].r = r - 'A';
        }
    }

    preorder(nodes, 0);
    cout << '\n';

    inorder(nodes, 0);
    cout << '\n';

    postorder(nodes, 0);
    cout << '\n';

    return 0;
}