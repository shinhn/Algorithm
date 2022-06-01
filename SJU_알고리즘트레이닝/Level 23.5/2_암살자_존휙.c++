#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[3][4];
int y1,x1,y2,x2,y3,x3;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> y1 >> x1;
    cin >> y2 >> x2;
    cin >> y3 >> x3;

    map[y1][x1] = 1;
    map[y2][x2] = 1;
    map[y3][x3] = 1;

    for(int i=0;i<4;i++){
        if(map[y1][i] == 1 && i != x1){
            cout << "위험";
            return 0;
        }
    }

    for(int i=0;i<4;i++){
        if(map[y2][i] == 1 && i != x2){
            cout << "위험";
            return 0;
        }
    }

    for(int i=0;i<4;i++){
        if(map[y3][i] == 1 && i != x3){
            cout << "위험";
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(map[i][x1] == 1 && i != y1){
            cout << "위험";
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(map[i][x2] == 1 && i != y2){
            cout << "위험";
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(map[i][x3] == 1 && i != y3){
            cout << "위험";
            return 0;
        }
    }

    cout << "안전";

    return 0;
}