#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, string> word;



int solution(string s) {

    int answer = 0;
    string ans, tmp;
    
    word["zero"] = "0";
    word["one"] = "1";
    word["two"] = "2";
    word["three"] = "3";
    word["four"] = "4";
    word["five"] = "5";
    word["six"] = "6";
    word["seven"] = "7";
    word["eight"] = "8";
    word["nine"] = "9";

    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            ans += s[i];
        }
        else{
            tmp += s[i];
        }

        if(word[tmp] != ""){
            ans += word[tmp];
            tmp = "";
        }
    }

    answer = stoi(ans);

    return answer;
}

int main(){

    string str;
    cin >> str;
    cout << solution(str);

    return 0;
}