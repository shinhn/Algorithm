#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[4][3];
int Ay,Ax,By,Bx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(map[i][j] == 'A'){
                Ay = i;
                Ax = j;
            }
            if(map[i][j] == 'B'){
                By = i;
                Bx = j;
            }
        }
    }

    cout << abs(Ay - By) + abs(Ax - Bx);

    return 0;
}