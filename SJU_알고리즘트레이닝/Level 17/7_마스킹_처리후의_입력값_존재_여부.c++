#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int mask[2][5] = {{0,0,1,0,0},{0,0,1,1,1}};
int arr[2][5] = {{3,5,4,1,1},{3,5,2,5,6}};
int num;
bool flag;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            if(mask[i][j] == 1 && arr[i][j] == num){
                flag = true;
            }
        }
    }

    if(flag) cout << num << " 존재\n";
    else cout << num << " 없음\n";
    
    return 0;
}