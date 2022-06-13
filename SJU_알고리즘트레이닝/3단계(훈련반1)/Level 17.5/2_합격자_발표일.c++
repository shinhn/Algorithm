#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int arr[6] = {3,7,4,1,2,6};
int univer[2][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> univer[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            bool flag = false;
            for(int k=0;k<6;k++){
                if(univer[i][j] == arr[k]){
                    flag = true;
                    break;
                }
            }
            if(flag) cout << "OK ";
            else cout << "NO ";
        }
        cout << "\n";
    }
    
    return 0;
}