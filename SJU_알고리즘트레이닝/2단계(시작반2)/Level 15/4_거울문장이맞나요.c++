#include <iostream>
using namespace std;

string str1, str2;

int main(){
    cin >> str1 >> str2;

    for(int i=0;i<str1.length();i++){
        if(str1[i] != str2[str2.length()-1-i]){
            cout << "거울문장아님";
            return 0;
        }
    }

    cout << "거울문장";

    return 0;
}