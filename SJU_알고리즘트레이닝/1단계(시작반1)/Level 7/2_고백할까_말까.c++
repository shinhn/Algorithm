#include <iostream>
using namespace std;

int a, b;

int main(){
    cin >> a >> b; 
    if(a > b){
        if((a-b)%2 == 1) cout << "고백한다";
        else cout << "짝사랑만";
    }
    else{
        if((b-a)%2 == 1) cout << "고백한다";
        else cout << "짝사랑만";
    }

    return 0;
}