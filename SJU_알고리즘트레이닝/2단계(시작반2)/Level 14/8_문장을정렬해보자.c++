#include <iostream>
#include <algorithm>
using namespace std;

string str;

int main(){
    cin >> str;
    
    sort(str.begin(), str.end());

    cout << str;

    return 0;
}