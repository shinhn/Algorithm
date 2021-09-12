#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int TestCase, N;            // N : 성벽의 수
int x[100], y[100], r[100]; // 위치 좌표 (x,y), 반지륾 크기 r
int longest;                // 지금까지 찾은 가장 긴 잎-잎의 경로의 길이를 저장.

struct TreeNode
{
    vector<TreeNode *> children;
};

// 성벽 a 성벽 b를 포함하는지 확인
bool enclose(int a, int b)
{
    // 원을 포함하는 걸 확인 하는 공식 (x1-x2)^2 + (y1-y2)^2 < (r1-r2)^2
    return (r[a] > r[b]) && (pow((x[a] - x[b]), 2) + pow((y[a] - y[b]), 2) < pow((r[a] - r[b]), 2));
}

// parent가 child의 부모인지 확인
bool isChild(int parent, int child)
{
    if (!enclose(parent, child))
        return false;

    // 직접포함관계가 아니라 간접포함관계일 경우 false
    // 직접포함관계 : parent -> child (직속 : 자식)
    // 간접포함관계일 : parent -> (다른 TreeNode) -> child (직속 X : 자손)
    for (int i = 0; i < N; i++)
    {
        if (i != parent && i != child && enclose(parent, i) && enclose(i, child))
            return false;
    }

    return true;
}

// 주어진 번호의 성벽을 루트로 하는 트리를 생성
TreeNode *getTree(int root)
{
    TreeNode *tmp = new TreeNode();
    for (int i = 0; i < N; i++)
    {
        // i번째 성벽이 root 성벽에 포함되어 있을 경우, tree를 만들고, 자손 목록에 추가
        if (isChild(root, i))
        {
            tmp->children.push_back(getTree(i));
        }
    }
    return tmp;
}

// root를 루트로 하는 서브트리의 높이를 반환
int height(TreeNode *root)
{
    vector<int> heights;
    for (int i = 0; i < root->children.size(); i++)
    {
        heights.push_back(height(root->children[i]));
    }

    // 자식(높이)이 하나도 없을 경우 0을 반환.
    if (heights.empty())
        return 0;

    sort(heights.begin(), heights.end());

    // 자식(높이)이 2개 이상일 경우 비교하여 longest 갱신
    if (heights.size() >= 2)
    {
        /*
        정렬했으므로
        heights[heights.size() - 2] : 2번째로 큰 높이
        heights[heights.size() - 1] : 1번째로 큰 높이
        */
        // 서브트리 높이 + 1 == 루트에서 끝 잎까지의 거리
        int length = (heights[heights.size() - 2] + 1) + (heights[heights.size() - 1] + 1);
        longest = max(longest, length);
    }

    return heights.back() + 1; // vector.back() : 마지막 요소 -> + 1 == 가장 큰 높이
}

int solve(TreeNode *root)
{
    longest = 0; // 가장 긴 잎-잎의 경로의 길이 초기화
    return max(longest, height(root));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> TestCase;
    while (TestCase--)
    {
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> x[i] >> y[i] >> r[i];
        }

        TreeNode *root = getTree(0); // new : 동적 메모리 할당 연산자

        cout << solve(root) << '\n';
    }

    return 0;
}