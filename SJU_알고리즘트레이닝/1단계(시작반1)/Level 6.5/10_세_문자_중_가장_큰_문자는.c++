#include <iostream>
using namespace std;

char arr[3], first;

int main(){
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }

    first = arr[0];
    for(int i=1;i<3;i++){
        if(arr[i] > first){
            cout << "옳지않음\n";
            return 0;
        }
    }

    cout << "옳다" << first;

    return 0;
}