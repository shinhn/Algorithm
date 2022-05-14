#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {

    // 1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
    for(int i=0;i<new_id.size();i++){
        if(new_id[i]>='A' && new_id[i]<='Z'){
            new_id[i] -= ('A'-'a');
        }
    }
    cout << " 1 : " << new_id << "\n";

    // 2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
    for(int i=0;i<new_id.size();i++){
        if((new_id[i]>='a' && new_id[i]<='z') || (new_id[i]>='0' && new_id[i]<='9') || new_id[i]=='-' || new_id[i]=='_' || new_id[i] == '.'){
            continue;
        }
        new_id.erase(new_id.begin()+i);
        i--;
    }
    cout << " 2 : " << new_id << "\n";
    
    // 3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
    for(int i=0;i<new_id.size()-1;i++){
        if(new_id[i] =='.' && new_id[i+1] == '.'){
            new_id.erase(new_id.begin()+i);
            i--;
        }
    }
    cout << " 3 : " << new_id << "\n";

    // 4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
    if(new_id[0] == '.') new_id.erase(new_id.begin());
    if(new_id[new_id.size()-1] == '.') new_id.erase(new_id.begin() + new_id.size()-1);
    cout << " 4 : " << new_id << "\n";

    // 5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
    if(new_id.empty()) new_id += "a";
    cout << " 5 : " << new_id << "\n";

    // 6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
    // 만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
    if(new_id.size()>=16){
        for(int i=15;i<new_id.size();i++){
            new_id.erase(new_id.begin()+i);
            i--;
        }
    }
    if(new_id[new_id.size()-1] == '.') new_id.erase(new_id.begin() + new_id.size()-1);
    cout << " 6 : " << new_id << "\n";

    // 7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
    char ch = new_id[new_id.size()-1];
    while(new_id.size()<=2){
        new_id+=ch;
    }
    cout << " 7 : " << new_id << "\n";

    return new_id;
}

int main(){
    string str;
    cin >> str;
    solution(str);

    return 0;
}