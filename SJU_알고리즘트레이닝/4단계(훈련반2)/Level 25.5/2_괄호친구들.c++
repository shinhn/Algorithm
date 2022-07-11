#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string str;
int ans;
vector<char> num;

int change(vector<char> n){
    int t = pow(10,n.size()-1);
    int result = 0;

    for(int i=0;i<n.size();i++){
        result += (int(n[i]-'0') * t);
        t /= 10;
    }

    return result;
}

int main(){
    
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] == '['){
            i++;
            while(str[i] != ']'){
                num.push_back(str[i]);
                i++;
            }

            ans += change(num);
            
            num.clear();
        }

        if(str[i] == '{'){
            i++;
            while(str[i] != '}'){
                num.push_back(str[i]);
                i++;
            }

            ans *= change(num);
            
            num.clear();
        }
    }

    cout << ans;

    return 0;
}