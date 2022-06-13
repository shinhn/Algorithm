#include <iostream>
using namespace std;

int a,b;
char c,d;

int main(){
    int *p1 = &a, *p2 = &b;
    char *p3 = &c, *p4 = &d;

    cin >> a >> b >> c >> d;

    for(int i=0;i<*p1;i++){
        cout << *p3;
    }
    cout << "\n";
    for(int i=0;i<*p2;i++){
        cout << *p4;
    }

    return 0;
}