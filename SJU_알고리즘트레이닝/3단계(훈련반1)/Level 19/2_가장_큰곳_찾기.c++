#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int MAP[5][5] = {
    {3, 3, 5, 3, 1},
    {2, 2, 4, 2, 6},
    {4, 9, 2, 3, 4},
    {1, 1, 1, 1, 1},
    {3, 3, 5, 9, 2}
};

int sum(int y, int x) {
    // (y, x)좌표로부터 대각선 방향의 합을 반환
    int sum_el=0;
    if(y-1>=0 && x-1>=0) sum_el+=MAP[y-1][x-1];
    if(y+1<5 && x+1<5) sum_el+=MAP[y+1][x+1];
    if(y-1>=0 && x+1<5) sum_el+=MAP[y-1][x+1];
    if(y+1<5 && x-1>=0) sum_el+=MAP[y+1][x-1];

    return sum_el;
}

int max_sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int y,x;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            // cout << i << " " << j << " : " << sum(i,j) << "\n";
            if(max_sum < sum(i,j)){
                max_sum = sum(i,j);
                y = i;
                x = j;
            }
        }
    }

    cout << y << " " << x << "\n";

    return 0;
}