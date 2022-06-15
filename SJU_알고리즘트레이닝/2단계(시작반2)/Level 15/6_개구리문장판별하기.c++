#include <iostream>
using namespace std;

string str;

int main(){
    cin >> str;

    for(int i=0;i<str.length();i++){
        if((i+1)%2==1 && str[i] >= 'A' && str[i] <= 'Z') continue;
        if((i+1)%2==0 && str[i] >= 'a' && str[i] <= 'z') continue;
        cout << "일반문장";
        return 0;
    }

    cout << "개구리문장";

    return 0;
}