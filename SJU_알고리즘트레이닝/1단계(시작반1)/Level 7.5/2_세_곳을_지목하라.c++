#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6], a, b, c;

int main(){
    cin >> a >> b >> c; 
    arr[a] = 1;
    arr[b] = 1;
    arr[c] = 1;

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

    return 0;
}