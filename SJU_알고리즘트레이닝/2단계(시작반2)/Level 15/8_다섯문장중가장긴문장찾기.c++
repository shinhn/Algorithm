#include <iostream>
using namespace std;

string str[5], ans;
int max_l;

int main(){
    for(int i=0;i<5;i++){
        cin >> str[i];
        if(max_l < str[i].length()){
            ans = str[i];
            max_l = str[i].length();
        }
    }

    cout << ans;

    return 0;
}