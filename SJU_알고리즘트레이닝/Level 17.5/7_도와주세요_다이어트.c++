#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int levelTable[4][2] = {
    {10,20},
    {30,60},
    {100,150},
    {200,300}
};

int fruit[6];
int lev[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<6;i++){
        cin >> fruit[i];

        for(int j=0;j<4;j++){
            if(fruit[i] >= levelTable[j][0] && fruit[i] <= levelTable[j][1]) lev[j]++;
        }
    }

    for(int j=0;j<4;j++){
        cout << "lev" << j << ":" << lev[j] << "\n";
    }
    
    return 0;
}