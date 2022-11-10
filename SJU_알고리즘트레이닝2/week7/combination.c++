#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
int DT[31];

int com(int num){
    if(num==1) DT[num] = 1;
    if(DT[num]==0) DT[num] = DT[num-1] * num;
    
    return DT[num];
}

int main(){

    cin >> n >> k;

    for(int i=1;i<=30;i++){
        com(i);
    }

    cout << com(n)/(com(k)*com(n-k));

    return 0;
}