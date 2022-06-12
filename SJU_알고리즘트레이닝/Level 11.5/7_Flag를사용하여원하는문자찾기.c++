#include <iostream>

using namespace std;

char arr[3][3] = {
    {'a','b','d'},
    {'e','w','z'},
    {'q','v','a'}
};

void Process(char ch){
    ch = ch - ('A'-'a');

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == ch){
                cout << "존재";
                return;
            }
        }
    }

    cout << "없음";
    return;
}

void input(){
    char ch;
    cin >> ch;
    Process(ch);
}

int main(){

    input();

    return 0;
}