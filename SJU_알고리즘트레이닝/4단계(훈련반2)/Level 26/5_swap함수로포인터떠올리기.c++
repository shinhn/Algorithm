#include <iostream>
using namespace std;

void Swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    
    int a, b;
    cin >> a >> b;

    Swap(&a, &b);

    cout << a << " " << b;

    return 0;
}