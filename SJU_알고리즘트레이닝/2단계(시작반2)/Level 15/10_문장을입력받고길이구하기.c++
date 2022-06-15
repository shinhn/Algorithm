#include <iostream>
using namespace std;

string str[3];

void CountLine(string str[]){
    for(int i=0;i<3;i++){
        cout << str[i].length() << "=" << str[i] << "\n";
    }
}

int main(){
    for(int i=0;i<3;i++){
        cin >> str[i];
    }

    CountLine(str);

    return 0;
}