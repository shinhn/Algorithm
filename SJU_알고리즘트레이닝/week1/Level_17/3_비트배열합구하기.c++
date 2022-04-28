#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[3][3] = {{3,5,9},{4,2,1},{1,1,5}};
    int color[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> color[i][j];
        }
    }
    
    int ans=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(color[i][j]==1){
                ans+=arr[i][j];
            }
        }
    }
    
    cout << ans << "\n";

    return 0;
}