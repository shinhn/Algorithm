#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int comp(int a, int b){
    return a-b;
}

void print(int t1, int t2){
    cout << "합:" << sum(t1, t2) << "\n" << "차:" << comp(t1,t2);
}

int main(){

    int a, b;
    cin >> a >> b;
    print(a, b);

    return 0;
}