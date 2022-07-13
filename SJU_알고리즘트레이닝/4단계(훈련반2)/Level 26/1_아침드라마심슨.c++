#include <iostream>
using namespace std;

int a,b,c,d,e;
int* arr[5];

int main(){
    
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    cin >> a >> b >> c >> d >> e;

    int max_e = *arr[0], min_e = *arr[0];
    for(int i=1;i<5;i++){
        if(*arr[i] > max_e) max_e = *arr[i];
        if(*arr[i] < min_e) min_e = *arr[i];
    }

    cout << "MAX:" << max_e << "\n";
    cout << "MIN:" << min_e << "\n";

    return 0;
}