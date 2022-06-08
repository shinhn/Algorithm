#include <iostream>
using namespace std;

char ch;

int main(){
    cin >> ch;

    cout << char(ch+('A'-'a'));

    return 0;
}