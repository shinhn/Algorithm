#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    char a, b, c;
    cin >> a >> b >> c;

    char *p1 = &a;
    char *p2 = &b;
    char *p3 = &c;

    cout << char(*p1 + 1) << " " << char(*p2 + 1) << " " << char(*p3 + 1);

    return 0;
}