#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GOP(){
    int a, b; 
    cin >> a >> b; 

    return a*b;
}

int SUM(){
    int a, b; 
    cin >> a >> b; 

    return a+b;
}

int main(){

    int a = GOP();
    int b = SUM();

    if(a>b) cout << "GOP>SUM";
    else if(a<b) cout << "GOP<SUM";
    else cout << "GOP==SUM";

    return 0;
}