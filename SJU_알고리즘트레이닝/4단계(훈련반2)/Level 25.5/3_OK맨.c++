#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;

int main(){
    
    cin >> str;

    // 1. OK맨이 싫어하는 단어 "bad", "no", "puck" 가 없어야 함
    int pos = str.find("bad");
    if(pos != string::npos){
        cout << "fail";
        return 0;
    }

    pos = str.find("no");
    if(pos != string::npos){
        cout << "fail";
        return 0;
    }

    pos = str.find("puck");
    if(pos != string::npos){
        cout << "fail";
        return 0;
    }

    // 2. 연속적인 언더바 "_"가 총 5개 이하
    bool before = false; // 바로 전 문자가 '_' 이면 true
    int cnt = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == '_'){
            if(before == true) cnt++;
            else{
                cnt = 1;
                before = true;
            }

            if(cnt > 5){
                cout << "fail";
                return 0;
            }
        }
        else{
            before = false;
        }
    }

    // 3. 각 알파벳들 사용 횟수가 5회 이하 (대소문자 구분)
    int alp_b[26]={0}, alp_s[26]={0};
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            alp_s[str[i]-'a'] ++;
            if(alp_s[str[i]-'a'] > 5){
                cout << "fail";
                return 0;
            }
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            alp_b[str[i]-'A'] ++;
            if(alp_b[str[i]-'A'] > 5){
                cout << "fail";
                return 0;
            }
        }
    }

    // 4. 숫자가 없어야 함
    for(int i=0;i<str.length();i++){
        if(str[i] >= '0' && str[i] <= '9'){
            cout << "fail";
            return 0;
        }
    }
    
    // 통과
    cout << "pass";

    return 0;
}