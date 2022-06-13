#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char ch1, ch2;
int n;

int main(){
    cin >> ch1 >> ch2 >> n;

    for(int i=0;i<n;i++){
        for(int j=ch1;j<=ch2;j++){
            cout << char(j);
        }
        cout << "\n";
    }

    return 0;
}