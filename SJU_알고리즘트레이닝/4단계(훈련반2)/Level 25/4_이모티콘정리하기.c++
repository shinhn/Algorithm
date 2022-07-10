#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<char> ans;

int main(){
    
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] == '('){
            if(ans.empty()) ans.push_back('(');
            else if(ans[ans.size()-1] != '(') ans.push_back('(');
        } 
        else if(str[i] == ')'){
            if(ans.empty()) ans.push_back(')');
            else if(ans[ans.size()-1] != ')') ans.push_back(')');
        }
        else if(str[i] == '^'){
            if(i+2 < str.length() && str[i+2] == '^'){
                if(str[i+1] == '^'){
                    ans.push_back('^');
                    ans.push_back('^');
                }
                else {
                    ans.push_back('^');
                    ans.push_back('_');
                    ans.push_back('^');
                }

                i+=2;
            }
            else{
                ans.push_back('^');
            }
        }
        else{
            ans.push_back(str[i]);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    

    return 0;
}