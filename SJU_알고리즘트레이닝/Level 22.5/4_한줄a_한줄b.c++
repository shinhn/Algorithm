#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[3][2][3];
int n1,n2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n1 >> n2;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                if(j==0) arr[i][j][k] = n1;
                else arr[i][j][k] = n2;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}