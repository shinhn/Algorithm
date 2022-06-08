#include <iostream>
using namespace std;

char a, b;

int main(){
    cin >> a >> b; 

    cout << "문자'" << a << "'의 아스키코드값은 " << int(a) << "\n";
    cout << "문자'" << b << "'의 아스키코드값은 " << int(b) << "\n";

    return 0;
}