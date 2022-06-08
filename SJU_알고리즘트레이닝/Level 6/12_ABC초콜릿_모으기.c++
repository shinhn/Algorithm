#include <iostream>
using namespace std;

char flag, a, b, c;

void input(){
    cin >> a >> b >> c;
}

void process(){
    if(a == 'A' && b == 'B' && c == 'C') flag = 1;
}

void output(){
    if(flag == 1) cout << "ABC를찾았다";
    else cout << "못찾았다";
}

int main(){
    input();
    process();
    output();

    return 0;
}