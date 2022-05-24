#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[3][3] = {
    {3,5,1},
    {3,8,1},
    {1,1,5}
};

int bitarray[2][2];
int ans, y, x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> bitarray[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int cnt = 0;

            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                    if(i+k<3 && j+l<3 && bitarray[k][l] == 1) cnt += map[i+k][j+l];
                }
            }

            if(ans < cnt){
                y = i;
                x = j;
                ans = cnt;
            }
        }
    }

    cout << "(" << y << "," << x << ")\n";

    return 0;
}