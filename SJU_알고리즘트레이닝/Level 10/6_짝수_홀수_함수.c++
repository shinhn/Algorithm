#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printData(int value){
    cout << value << "\n";
}

void even(int value){
    printData(2*value);
}

void odd(int value){
    printData(value-10);
}

int main(){

    int a, b; 
    cin >> a >> b; 

    if((a/b)%2==0) even(a/b);
    else odd(a/b);

    printData(a+b);

    return 0;
}