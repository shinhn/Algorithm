#include <iostream>
using namespace std;

int n,i,j;

int main(){
    cin >> n;

    while(i<3){
        j=0;
        while(j<5){
            cout << n;
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}