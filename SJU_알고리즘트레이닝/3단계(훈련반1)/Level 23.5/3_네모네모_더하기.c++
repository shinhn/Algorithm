#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[4][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum += map[i][j];
        }
        map[i][3] = sum;
    }

    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum += map[i][j];
        }
        map[3][j] = sum;
    }

    int sum=0;
    for(int i=0;i<3;i++){
        sum += map[i][i];
    }
    map[3][3] = sum;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}