#include <iostream>

using namespace std;

int n = 10;
int a[10] = {16,12,17,48,89,21,97,59,30,16};
int i, j, t, res=0;

int main(){
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    cout << a[2];
}


