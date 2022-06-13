#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
char ch;

int main(){
    
    cin >> ch >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ch;
        }
        cout << "\n";
    }

    return 0;
}