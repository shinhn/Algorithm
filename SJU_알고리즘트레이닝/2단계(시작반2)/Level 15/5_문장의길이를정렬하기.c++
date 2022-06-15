#include <iostream>
#include <algorithm>
using namespace std;

string str[4];
int arr[4];

int main(){
    for(int i=0;i<4;i++){
        cin >> str[i];
    }

    for(int i=0;i<4;i++){
        arr[i] = str[i].length();
    }

    sort(arr, arr+4);

    for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }

    return 0;
}