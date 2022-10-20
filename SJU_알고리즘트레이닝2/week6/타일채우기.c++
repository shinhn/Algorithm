#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;

int func(int num){
    if(num <= 1) return 1;
    return func(num-1) + 2*func(num-2);
}

int main(){

    cin >> n >> m;

    cout << func(n)%m;

    return 0;
}