#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b; 

void input(){
    cin >> a >> b; 
}

void output(){
    int i=5;
    while(i<=a+b){
        cout << i << " ";
        i++;
    }
}

int main(){
    input();
    output();

    return 0;
}