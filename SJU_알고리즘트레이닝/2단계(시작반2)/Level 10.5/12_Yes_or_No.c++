#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int yesOrNo(){
    int n;
    cin >> n;

    if(n%3 == 0) return 7;
    if(n%3 == 1) return 35;
    if(n%3 == 2) return 50;

    return 0;
}

int main(){

    cout << yesOrNo();

    return 0;
}