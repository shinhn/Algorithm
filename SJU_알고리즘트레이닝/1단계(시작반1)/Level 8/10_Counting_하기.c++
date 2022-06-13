#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][4] = {{4,3,1,1},{3,1,2,1},{0,0,1,2}};
int n, cnt;

int main(){
    cin >> n;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(n == arr[i][j]) cnt++;
        }
    }

    cout << cnt << "개 존재합니다";

    return 0;
}