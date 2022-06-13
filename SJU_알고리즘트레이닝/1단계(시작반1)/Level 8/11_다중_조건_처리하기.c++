#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int price;

void starBox(){
    for(int i=1;i<=20;i++){
        if(i%2 == 1) cout << i << " ";
    }
}

void macDoll(){
    for(int i='H';i>='A';i--){
        cout << char(i) << " ";
    }
}

void copyBean(){
    for(int i=-5;i<=5;i++){
        cout << i << " ";
    }
}

int main(){
    cin >> price;

    if(price >= 3500 && price <= 5000) starBox();
    else if(price >= 2500 && price < 3500) macDoll();
    else copyBean();

    return 0;
}