#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string str;
vector<char> name, num;

int main(){
    
    cin >> str;

    for(int i=0;i<str.length();i++){
        while(str[i] >= 'A' && str[i] <= 'Z'){
            name.push_back(str[i]);
            i++;
        }

        while(str[i] >= '0' && str[i] <= '9'){
            num.push_back(str[i]);
            i++;
        }

        i--;

        int n = 0, t = pow(10, num.size()-1);
        for(int j=0;j<num.size();j++){
            n += (t * (num[j]-'0'));
            t /= 10;
        }

        for(int j=0;j<name.size();j++){
            cout << name[j];
        }
        cout << "#" << n+17 << "\n";

        name.clear();
        num.clear();
    }

    return 0;
}