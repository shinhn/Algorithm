#include <iostream>
using namespace std;

int arr[7] = {4,2,5,1,6,7,3};
int ans;

int main(){
    char a, b;
    cin >> a >> b;

    int aIndex = a - 'A';
    int bIndex = b - 'A';

    if(bIndex < aIndex){
        for(int i=bIndex+1;i<aIndex;i++){
            ans += arr[i];
        }
    }
    else{
        for(int i=aIndex+1;i<bIndex;i++){
            ans += arr[i];
        }
    }
    

    cout << ans;

    return 0;
}