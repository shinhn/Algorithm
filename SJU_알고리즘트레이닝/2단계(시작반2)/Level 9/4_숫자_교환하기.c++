#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6] = {3,4,2,5,7,9};
int a, b;

int main(){

    cin >> a >> b; 

    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b]  = tmp;

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

    return 0;
}