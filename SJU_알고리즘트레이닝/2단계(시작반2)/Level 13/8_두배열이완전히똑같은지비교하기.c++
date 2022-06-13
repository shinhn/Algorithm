#include <iostream>
using namespace std;

void CompareGo(int arr1[], int arr2[]){
    for(int i=0;i<5;i++){
        if(arr1[i] != arr2[i]){
            cout << "두배열은같지않음";
            return;
        }
    }

    cout << "두배열은완전같음";
}

int main(){
    int arr1[5] = {3,5,1,2,7};
    int arr2[5];

    for(int i=0;i<5;i++){
        cin >> arr2[i];
    }

    CompareGo(arr1, arr2);

    return 0;
}