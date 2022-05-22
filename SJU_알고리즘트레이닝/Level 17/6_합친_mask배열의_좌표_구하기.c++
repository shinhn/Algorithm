#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int mask1[4][4] = {{0,0,0,1},{1,1,0,1},{1,0,0,1},{1,1,1,1}};
int mask2[4][4] = {{1,1,1,1},{1,0,1,1},{1,0,0,0},{1,0,0,0}};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mask1[i][j] == 0 && mask2[i][j]==0) cout << "(" << i << "," << j << ")\n";
        }
    }

    return 0;
}