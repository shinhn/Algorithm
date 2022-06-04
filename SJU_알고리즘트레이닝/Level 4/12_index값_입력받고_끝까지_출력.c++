#include <iostream>

using namespace std;

int main(){
    
    int arr[10] = {5,25,54,2,-33,57,82,-8,13,1};
    int idx;
    cin >> idx;

    for(int i=idx;i<10;i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}