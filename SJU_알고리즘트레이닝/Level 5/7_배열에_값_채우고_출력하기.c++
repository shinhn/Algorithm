#include <iostream>

using namespace std;

int arr[6];

int main(){
    
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }

    int n;
    cin >> n;

    for(int i=3;i<6;i++){
        arr[i] = n;
        n++;
    }

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}