#include <iostream>

using namespace std;

int main(){

    int num[7];

    for(int i=0;i<7;i++){
        cin >> num[i];
    }

    for(int i=3;i<7;i++){
        cout << num[i] << " ";
    }

    return 0;
}