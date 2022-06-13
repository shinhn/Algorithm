#include <iostream>
using namespace std;

char ch;

int main(){
    cin >> ch;

    for(int i=0;i<=ch-'A';i++){
        cout << char('A'+i);
    }

    return 0;
}