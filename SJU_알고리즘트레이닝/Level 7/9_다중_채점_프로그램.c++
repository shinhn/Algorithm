#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[5];

int main(){
    
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        cout << i+1 << "번사람은" << arr[i] << "점";
        if(arr[i]>=70) cout << "PASS\n";
        else if(arr[i]>=50) cout << "RETEST\n";
        else cout << "FAIL\n";
    }

    return 0;
}