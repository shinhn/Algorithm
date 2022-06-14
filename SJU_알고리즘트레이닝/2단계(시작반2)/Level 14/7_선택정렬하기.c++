#include <iostream>
#include <algorithm>
using namespace std;

int arr[6];

bool cmp(int a, int b){
    return a>b;
}

int main(){
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    sort(arr, arr+6, cmp);

    for(int i=0;i<6;i++){
        cout <<  arr[i];
    }

    return 0;
}