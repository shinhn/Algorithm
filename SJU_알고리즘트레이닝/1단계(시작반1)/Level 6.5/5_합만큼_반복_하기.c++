#include <iostream>
using namespace std;

int arr[3], sum;

int main(){
    for(int i=0;i<3;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0;i<sum;i++){
        for(int j=0;j<3;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}