#include <iostream>
using namespace std;

int arr[3][5] = {
    {5,1,4,2,6},
    {3,5,0,0,7},
    {9,9,8,3,1}
};

int main(){
    int n, cnt=0;
    cin >> n;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] > n) cnt++;
        }
    }

    cout << cnt << "개";
    

    return 0;
}