#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int image[4][4];

int rectSum(int y, int x){
    int sum=0;

    for(int i=y;i<y+2;i++){
        for(int j=x;j<x+3;j++){
            if(i<4 && j<4){
                sum += image[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> image[i][j];
        }
    }

    int max_sum = 0, y, x;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(max_sum < rectSum(i,j)){
                max_sum = rectSum(i,j);
                y=i;
                x=j;
            }
        }
    }

    cout << "(" << y << "," << x << ")\n";

    return 0;
}