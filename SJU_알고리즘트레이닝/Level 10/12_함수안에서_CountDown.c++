#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num;

void INPUT(){
    cin >> num;
}

void CountDown(){
    for(int i=num;i>=1;i--){
        cout << i << " ";
    }
}

int main(){

    INPUT();
    CountDown();

    return 0;
}