#include <iostream>
using namespace std;

char ch;

int main(){
    cin >> ch;

    for(int i=ch;i>='a';i--){
        cout << char(i);
    }

    return 0;
}