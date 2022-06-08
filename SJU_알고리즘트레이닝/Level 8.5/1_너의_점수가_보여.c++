#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6];

int main(){
    
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    for(int i=0;i<6;i++){
        cout << i << "번은 " << arr[i] << "점 ";
        if(arr[i] < 5) cout << "불합격\n";
        else cout << "합격\n";
    }

    return 0;
}