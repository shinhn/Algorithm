#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[4][5] = {
    {3,5,4,2,5},
    {3,3,3,2,1},
    {3,2,6,7,8},
    {9,1,1,3,2}
};

int py,px,y,x,max_count;

int count(int I, int J){
    int cnt=0;
    for(int i=I;i<I+py;i++){
        for(int j=J;j<J+px;j++){
            if(i<4 && j<5){
                cnt += map[i][j];
            }
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> py >> px;

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(max_count < count(i,j)){
                max_count = count(i,j);
                y = i;
                x = j;
            }
        }
    }

    cout << "(" << y << "," << x << ")\n";

    return 0;
}