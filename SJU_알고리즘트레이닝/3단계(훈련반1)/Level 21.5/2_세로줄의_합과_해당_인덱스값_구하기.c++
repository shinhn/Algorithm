#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[3][4] = {
    {3,4,1,5},
    {3,4,1,3},
    {5,2,3,6}
};

int sum[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            sum[i] += map[j][i];
        }
    }

    int idx;
    cin >> idx;
    cout << sum[idx];

    return 0;
}