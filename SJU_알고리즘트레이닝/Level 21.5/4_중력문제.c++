#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[4][3];

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

    for(int j=0;j<3;j++){
        vector<char> tmp;
        for(int i=3;i>=0;i--){
            if(map[i][j] == '_') continue;
            tmp.push_back(map[i][j]);
            map[i][j] = '_';
        }
        for(int k=0;k<tmp.size();k++){
            map[3-k][j] = tmp[k];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << map[i][j];
        }
        cout << "\n";
    }

    return 0;
}