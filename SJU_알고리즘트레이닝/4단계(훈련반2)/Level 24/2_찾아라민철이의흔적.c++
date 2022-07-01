#include <iostream>
using namespace std;



int main(){
    string name;
    cin >> name;

    int n;
    cin >> n;

    while(n--){
        string str;
        cin >> str;

        bool flag = false;
        for(int i=0;i<=str.length()-name.length();i++){
            for(int j=0;j<name.length();j++){
                if(str[i+j] != name[j]) break;
                if(j == name.length()-1) flag = true;
            }
        }
        if(flag) cout << "O\n";
        else cout << "X\n";
    }

    return 0;
}