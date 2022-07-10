#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<string> ans;

int main(){
    
    cin >> str;
    
    int pos = str.find("_");

    while(pos != string::npos){
        if(str.substr(0,pos) != "") ans.push_back(str.substr(0,pos)); // 0 ~ pos까지의 부분 문자열
        str.erase(0,pos+1); // pos+1 전까지의 문자들을 지운다

        pos = str.find("_");
    }
    ans.push_back(str);

    for(int i=0;i<ans.size();i++){
        cout << i+1 << "#" << ans[i] << "\n";
    }

    return 0;
}