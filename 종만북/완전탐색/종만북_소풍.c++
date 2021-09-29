#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> // memset 함수

using namespace std;

int n, m, testcase;   // n : 학생의 수, m : 친구 쌍의 수
bool friends[10][10]; // 친구 사이인지 기록
bool taken[10];

int countPairngs()
{
    int firstFree = -1; // 아직 짝이 지어지지 않은 학생들 중 가장 번호가 빠른 학생
    for (int i = 0; i < n; i++)
    {
        if (!taken[i])
        {
            firstFree = i;
            break;
        }
    }

    if (firstFree == -1)
    {
        return 1; // <기저사례> 모든 학생들이 짝을 찾았으면 total_couple_way가 1 -> 종료
    }

    int total_couple_way = 0; // 정답 (쌍을 이루는 방법의 수)
    for (int i = firstFree + 1; i < n; i++)
    {
        if (!taken[i] && friends[firstFree][i])
        {
            taken[i] = true;
            taken[firstFree] = true;
            total_couple_way += countPairngs();

            taken[i] = false;
            taken[firstFree] = false;
        }
    }

    return total_couple_way;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> testcase;

    while (testcase--)
    {
        cin >> n >> m;

        // 초기화
        memset(friends, false, sizeof(friends));
        memset(taken, false, sizeof(taken));

        for (int i = 0; i < m; i++)
        {
            int f1, f2;
            cin >> f1 >> f2;

            friends[f1][f2] = true;
            friends[f2][f1] = true;
        }

        cout << countPairngs();
    }

    return 0;
}