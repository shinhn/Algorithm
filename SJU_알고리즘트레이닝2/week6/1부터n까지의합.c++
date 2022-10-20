#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int func (int num){
    if(num==1) return 1;
    return num + func(num-1);
}

int main(){

    cin >> n;

    cout << func(n);

    return 0;
}