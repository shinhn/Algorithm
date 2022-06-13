#include <iostream>

using namespace std;

int main(){
    
    int arr[10] = {5,7,1,8,-4,-73,4,2,20,84};
    int idx;
    cin >> idx;

    for(int i=idx;i>=0;i--){
        cout << arr[i] << "\n";
    }
    
    
    return 0;
}