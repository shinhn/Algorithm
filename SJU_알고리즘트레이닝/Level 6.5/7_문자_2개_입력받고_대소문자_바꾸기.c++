#include <iostream>
using namespace std;

char a, b;

int main(){
    cin >> a >> b; 

    if(a >= 'a' && a <= 'z') cout << char(a + ('A'-'a')) << " ";
    else cout << char(a - ('A'-'a')) << " ";

    if(b >= 'a' && b <= 'z') cout << char(b + ('A'-'a')) << "\n";
    else cout << char(b - ('A'-'a')) << "\n";

    return 0;
}