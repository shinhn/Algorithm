#include <iostream>
using namespace std;

int arr[5], cnt;

int main(){
    for(int i=0;i<5;i++){
        cin >> arr[i];
        if(arr[i] >= 3 && arr[i] <= 7) cnt++;
    }

    cout << cnt;

    return 0;
}