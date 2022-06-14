#include <iostream>
using namespace std;

int vect[7] = {3,5,1,1,2,3,2};
int arr[4];

int main(){
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    for(int i=0;i<4;i++){
        int cnt=0;
        for(int j=0;j<7;j++){
            if(arr[i] == vect[j]) cnt++;
        }
        cout << arr[i] << "=" << cnt << "개\n";
    }

    return 0;
}