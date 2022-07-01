#include <iostream>
using namespace std;



int main(){
    
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        cout << str[i];
    }
    cout << "\n";
    for(int i=str.length()-1;i>=0;i--){
        cout << str[i];
    }

    return 0;
}