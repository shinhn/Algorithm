#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr1[5] = {'B','D','5','Q','A'};
char arr2[5] = {'Q','E','R','E','F'};
char ch;

void input(){
    cin >> ch;
}

void output(){
    if(ch >= 'a' && ch <= 'z'){
        for(int i=0;i<5;i++){
            cout << arr1[i];
        }
    }
    else if(ch >= 'A' && ch <= 'Z'){
        for(int i=0;i<5;i++){
            cout << arr2[i];
        }
    }
    else if(ch >= '0' && ch <= '9'){
        for(int i='H';i>='A';i--){
            cout << char(i);
        }
    }
}

int main(){
    
    input();
    output();
    

    return 0;
}