#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char aToZ(){
    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= char(('Z'-'A')/2 + 'A')) return 'A';
    else return 'Z';
}

int main(){

    cout << aToZ();

    return 0;
}