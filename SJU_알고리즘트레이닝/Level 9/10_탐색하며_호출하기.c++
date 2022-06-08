#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[5];

void checkChar(char ch){
    if(ch >= 'A' && ch <= 'Z') cout << "대";
    else cout << "소";
}

int main(){

    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        checkChar(arr[i]);
    }

    return 0;
}