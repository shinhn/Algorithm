#include <iostream>
using namespace std;

char arr[6] = {'$','@','D','A','9','#'};

int main(){
    
    for(int i=0;i<6;i++){
        cout << arr[i] << ":" << int(arr[i]) << "\n";
    }

    return 0;
}