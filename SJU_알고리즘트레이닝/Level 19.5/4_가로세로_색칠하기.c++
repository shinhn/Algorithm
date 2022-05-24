#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[4][4];
char op;
int idx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> op >> idx;
        if(op == 'G'){
            map[idx][0] = 1;
            map[idx][1] = 1;
            map[idx][2] = 1;
            map[idx][3] = 1;
        }
        if(op == 'S'){
            map[0][idx] = 1;
            map[1][idx] = 1;
            map[2][idx] = 1;
            map[3][idx] = 1;
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}