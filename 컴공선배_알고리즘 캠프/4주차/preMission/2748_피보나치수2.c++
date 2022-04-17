#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long fibo[91];
int n;

// Bottm Up
int main(){
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    cin >> n;
    
    for(int i=2;i<=n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    cout << fibo[n] << "\n";

    return 0;
}