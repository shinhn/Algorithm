#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int vect[4][3];

struct Coord {
    int x, y; // x와 y 좌표
};

Coord input[4]; // Coord 구조체 배열

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> input[i].y >> input[i].x;
    }

    for(int i=0;i<4;i++){
        vect[input[i].y][input[i].x] = 5;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << vect[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}