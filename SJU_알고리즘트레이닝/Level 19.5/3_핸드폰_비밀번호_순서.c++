#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[4];
int map[4][4], result[4][4];
int cnt=1, idx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    int num = 1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            map[i][j] = num;
            num++;
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(map[i][j] == arr[idx]){
                idx ++;
                result[i][j] = idx;
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}