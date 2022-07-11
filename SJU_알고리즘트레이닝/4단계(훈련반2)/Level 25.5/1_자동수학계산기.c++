#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string str;
vector<char> num;
char op;
int ans;

int change(vector<char> n){
    int t = pow(10, n.size()-1); // 자릿수
    int result = 0;

    for(int i=0;i<n.size();i++){
        result += ((n[i]-'0') * t);
        t/=10;
    }

    return result;
}

int main(){
    
    cin >> str;

    if(str[0] != '-') str = "+" + str;

    for(int i=0;i<str.length();i++){
        if(str[i] == '+') {
            op = '+';
        }
        else if(str[i] == '-') {
            op = '-';
        }
        else {
            num.push_back(str[i]);

            if(i+1 < str.length() && (str[i+1] == '+' || str[i+1] == '-')){
                if(op == '+'){
                    ans += change(num);
                    num.clear();
                }
                else {
                    ans -= change(num);
                    num.clear();
                }
            }
        }
    }

    if(op == '+'){
        ans += change(num);
    }
    else {
        ans -= change(num);
    }
    
    cout << ans;

    return 0;
}