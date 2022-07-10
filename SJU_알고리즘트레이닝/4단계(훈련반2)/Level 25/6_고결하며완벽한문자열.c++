#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
int s, e, n;

void perfect(vector<string> tmp){
    for(int i=0;i<tmp.size();i++){
        int alp[26] = {0,};
        int num[10] = {0,};
        for(int j=0;j<tmp[i].length();j++){
            if(tmp[i][j] >= 'A' && tmp[i][j] <= 'Z'){
                if(alp[tmp[i][j]-'A'] != 0){
                    cout << 'X';
                    return;
                }
                else alp[tmp[i][j]-'A'] ++;
            }
            else{
                if(num[tmp[i][j]-'0'] != 0){
                    cout << 'X';
                    return;
                }
                else num[tmp[i][j]-'0'] ++;
            }
        }
    }

    cout << 'O';
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        vector<string> tmp;

        cin >> str;

        while(1){
            s = str.find("<");
            e = str.find(">");
            if(s == string::npos || e == string::npos) break;
            
            tmp.push_back(str.substr(s+1,e-s-1));

            str.erase(0,e+1);
        }

        perfect(tmp);
    }
    
    

    return 0;
}