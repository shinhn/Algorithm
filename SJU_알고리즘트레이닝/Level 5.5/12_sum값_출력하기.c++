#include <iostream>
using namespace std;

int arr[5], sum;

int main(){
    
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "합은 " << sum << "입니다\n";

    return 0;
}