#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str1, str2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str1 >> str2;

    for(int i=0;i<=str1.length()-str2.length();i++){
        
        string tmp = str1.substr(i,str2.length());

        if(tmp.compare(str2) == 0){
            cout << "1\n";
            return 0;
        }
    }

    cout << "0\n";
    
    return 0;
}