#include <iostream>
using namespace std;

void ABC(int a, int b, int *SUM, int *GOP){
    *SUM = a+b;
    *GOP = a*b;
}

int main(){
    int a, b, SUM, GOP;
    cin >> a >> b;
    ABC(a, b, &SUM, &GOP);

    cout << SUM << " " << GOP;

    return 0;
}