#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[8] = {4,3,6,1,3,1,5,3};

int main(){

    int n, cnt=0;
    cin >> n;

    for(int i=0;i<8;i++){
        if(arr[i] == n) cnt++;
    }

    cout << "숫자" << n << "개수는" << cnt << "개";

    return 0;
}