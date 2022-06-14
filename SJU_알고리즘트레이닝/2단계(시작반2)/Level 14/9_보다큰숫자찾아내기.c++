#include <iostream>
#include <algorithm>
using namespace std;

int arr[6] = {10,50,40,20,30,40};
int arr2[6], cnt;

int main(){
    for(int i=0;i<6;i++){
        cin >> arr2[i];
        cnt=0;
        for(int j=0;j<6;j++){
            if(arr[j] > arr2[i]) cnt++;
        }
        cout << arr2[i] << "=" << cnt << "개\n";
    }

    return 0;
}