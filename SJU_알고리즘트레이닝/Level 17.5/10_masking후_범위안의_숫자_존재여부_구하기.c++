#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int arr[3][3] = {{3,1,9},{7,2,1},{1,0,8}};
int mask[3][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> mask[i][j];

            if(mask[i][j]==0) continue;

            if(arr[i][j] >= 3 && arr[i][j] <= 5){
                cout << "발견\n";
                return 0;
            }
        }
    }

    cout << "미발견\n";
    
    return 0;
}