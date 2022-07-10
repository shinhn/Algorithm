#include <iostream>
#include <string>
using namespace std;

string before[5] = {"KFC", "MC", "BICMAC", "SHACK", "SONY"};
string after[5] = {"#BBQ#", "#BBQ#", "#MACBOOK#", "##SHOCK", "#NONY#"};

string str;

int main(){
    
    cin >> str;

    for(int i=0;i<5;i++){
        size_t found = str.find(before[i]);
        if(found != string::npos){
            str.replace(found, before[i].length(), after[i]);
        }
    }

    cout << str;

    return 0;
}