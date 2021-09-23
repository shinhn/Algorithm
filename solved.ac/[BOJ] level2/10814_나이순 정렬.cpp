#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 1. 구조체 / 배열 이용

// struct member
// {
//     int age;
//     string name;
// };

// bool cmp(member m1, member m2)
// {
//     if (m1.age < m2.age)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     member mem[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> mem[i].age >> mem[i].name;
//     }

//     stable_sort(mem, mem + N, cmp);

//     cout << mem[0].age << ' ' << mem[0].name;
//     for (int i = 1; i < N; i++)
//     {
//         cout << '\n'
//              << mem[i].age << ' ' << mem[i].name;
//     }
// }

// sort 함수를 이용했을 때 예제와 동일하게 출력은 되지만 특정한 경우 때문에 boj에서 틀린 답으로 채점되었음
// 본 문제에서 나이가 같을 경우 입력받은 순서대로 출력해야 하므로 stable_sort 함수를 이용 (원래의 순서를 손상시키지 않으면서 정렬하는 것)

// --------------------------------------------------------------------------------------------------------------------
// 2. pair / vector 이용

// bool cmp(pair<int, string> p1, pair<int, string> p2)
// {
//     if (p1.first < p2.first)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     pair<int, string> tmp;
//     vector<pair<int, string> > arr;

//     for (int i = 0; i < N; i++)
//     {
//         cin >> tmp.first >> tmp.second;
//         arr.push_back(tmp);
//     }

//     stable_sort(arr.begin(), arr.end(), cmp);

//     for (int i = 0; i < N; i++)
//     {
//         cout << arr[i].first << ' ' << arr[i].second << '\n';
//     }
// }
