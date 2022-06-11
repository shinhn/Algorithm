#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    int arr[7];

    for(int i=0;i<7;i++){
        cin >> arr[i];
    }

    cout << "MAX=" << *max_element(arr, arr+7) << "\n";
    cout << "MIN=" << *min_element(arr, arr+7) << "\n";


    return 0;
}