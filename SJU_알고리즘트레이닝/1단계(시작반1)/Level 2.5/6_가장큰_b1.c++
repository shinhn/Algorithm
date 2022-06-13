#include <iostream>

using namespace std;

int main(){

    int b1,b2,b3,b4;

    cin >> b1 >> b2 >> b3 >> b4;

    if(b1 >= b2){
        if(b1 >= b3){
            if(b1 >= b4){
                cout << "b1이 가장 크다";
            }
        }
    }

    return 0;
}