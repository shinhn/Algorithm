#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Count(int n, int arr[3][3]){
    int cnt = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == n) cnt++;
        }
    }

    return cnt;
}

int main(){
    
    int arr[3][3] = {
        {1,1,1},
        {1,2,1},
        {3,6,3}
    };

    int n;
    cin >> n;
    cout << Count(n, arr);

    return 0;
}