#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[4][3] = {
    {'1','5','3'},
    {'4','5','5'},
    {'3','3','5'},
    {'4','6','2'}
};

int a, b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(map[i][j]-'0' >= a && map[i][j]-'0' <= b){
                map[i][j] = '#';
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}