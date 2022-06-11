#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    int a, b;
    cin >> a >> b;

    int *p=&a, *t=&b, temp;
    temp = *p;
    *p = *t;
    *t = temp;

    cout << *p << " " << *t;


    return 0;
}