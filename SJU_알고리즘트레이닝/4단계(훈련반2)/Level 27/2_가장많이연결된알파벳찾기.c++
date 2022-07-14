#include <iostream>
#include <vector>
using namespace std;

int arr[4][4];

int main(){
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    int max = 0, ans = 0;
    for(int i=0;i<4;i++){
        int cnt = 0;
        for(int j=0;j<4;j++){
            cnt += arr[i][j];
        }

        if(max < cnt){
            ans = i;
            max = cnt;
        }
    }

    cout << char(ans + 'A');

    return 0;
}