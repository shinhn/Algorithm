#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    char a, b;
    char *pa=&a, *pb=&b;

    cin >> a >> b;

    char tmp = *pa;
    *pa = *pb;
    *pb = tmp;

    cout << a << " " << b;

    return 0;
}