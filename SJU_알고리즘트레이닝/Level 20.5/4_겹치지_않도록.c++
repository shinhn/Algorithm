#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map1[4][4], map2[4][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> map1[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> map2[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(map1[i][j] == 1 && map2[i][j] == 1){
                cout << "걸리다\n";
                return 0;
            }
        }
    }

    cout << "걸리지않는다\n";

    return 0;
}