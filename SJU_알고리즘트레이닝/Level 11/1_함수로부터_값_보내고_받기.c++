#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int input(){
    int n;
    cin >> n;
    return n;
}

void calc(int a, int b, int c){
    cout << a+b+c;
}

int main(){

    int a = input();
    int b = input();
    int c = input();
    calc (a, b, c);

    return 0;
}