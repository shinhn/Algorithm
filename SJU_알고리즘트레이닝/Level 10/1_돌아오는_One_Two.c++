#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int one(){
    int n;
    cin >> n;
    return n;
}

char two(){
    char ch;
    cin >> ch;
    return ch;
}

int main(){

    int n = one();
    char ch = two();

    cout << n << ch;

    return 0;
}