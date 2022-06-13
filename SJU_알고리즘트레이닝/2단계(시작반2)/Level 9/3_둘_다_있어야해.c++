#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[6] = {'A','F','G','A','B','C'};
char a, b; 
bool ia,ib;

int main(){

    cin >> a >> b;

    for(int i=0;i<6;i++){
        if(arr[i] == a) ia = true;
        if(arr[i] == b) ib = true;
    }

    if(ia && ib) cout << "와2개";
    else if(ia || ib) cout << "오1개";
    else cout << "우0개";

    return 0;
}