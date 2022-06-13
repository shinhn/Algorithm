#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[4][5][3] = {
    {
        {'.','#','.'},
        {'#','.','#'},
        {'#','#','#'},
        {'#','.','#'},
        {'#','.','#'}
    },
    {
        {'#','#','#'},
        {'#','.','#'},
        {'#','#','#'},
        {'#','.','#'},
        {'#','#','#'}
    },
    {
        {'#','#','#'},
        {'#','.','#'},
        {'#','.','.'},
        {'#','.','#'},
        {'#','#','#'}
    },
    {
        {'#','#','.'},
        {'#','.','#'},
        {'#','.','#'},
        {'#','.','#'},
        {'#','#','.'}
    },
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(map[n][i][j] == '#')cout << "#";
            else cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}