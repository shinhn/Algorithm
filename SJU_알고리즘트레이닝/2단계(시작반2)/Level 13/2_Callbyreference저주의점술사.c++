#include <iostream>
using namespace std;

void moom(int *n, int *a, int *b, int *c){
    *a = *n -4;
    *b = *n +3;
    *c = *n *2;
}

int main(){
    int n, a, b, c;
    cin >> n;

    moom(&n, &a, &b, &c);

    cout << a << " " << b << " " << c;

    return 0;
}