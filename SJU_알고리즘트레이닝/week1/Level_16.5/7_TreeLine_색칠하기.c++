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

    int arr[7][4], num=1, l1, l2, l3;
    
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = num;
            num++;
        }
    }
    
    cin >> l1 >> l2 >> l3;
    for(int i=0;i<7;i++){
        if(i == l1 || i == l2 || i == l3){
            for(int j=0;j<4;j++){
                arr[i][j] = 0;
            }
        }
    }
    
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}