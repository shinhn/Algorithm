#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[3][4] = {
    {3,5,4,1},
    {1,1,2,3},
    {6,7,1,2}
};

bool changed[3][4];

int arr[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    for(int i=0;i<4;i++){
        int from, to;
        from = arr[i];
        if(i==3) to = arr[0];
        else to = arr[i+1];

        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                if(map[j][k] == from && changed[j][k] == false){
                    map[j][k] = to;
                    changed[j][k] = true;
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}