#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[3][6] = {
    {3, 5, 4, 2, 2, 3},
    {1, 3, 3, 3, 4, 2},
    {5, 4, 4, 2, 3, 5}
};

char price[5] = {'T','P','G','K','C'};

char ch;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch >> n;
    int result;

    result = map[ch-'A'][n-1];
    cout << price[result-1];

    
    return 0;
}