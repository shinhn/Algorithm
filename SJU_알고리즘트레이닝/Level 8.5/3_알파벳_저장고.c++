#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
char arr[5];

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    

    return 0;
}