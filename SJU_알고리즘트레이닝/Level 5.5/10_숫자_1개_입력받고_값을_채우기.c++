#include <iostream>
using namespace std;

int arr[6], n, t;

int main(){
    
    cin >> n;

    t = n;
    for(int i=0;i<6;i++){
        arr[i] = t;
        t += n;
    }

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

    return 0;
}