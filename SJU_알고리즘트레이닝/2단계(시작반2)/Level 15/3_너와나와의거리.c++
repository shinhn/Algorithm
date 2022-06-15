#include <iostream>
using namespace std;

int arr[6];

int main(){
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        if(abs(arr[i] - arr[i+1]) >= 3){
            cout << "재배치필요";
            return 0;
        }
    }

    cout << "완벽한배치";

    return 0;
}