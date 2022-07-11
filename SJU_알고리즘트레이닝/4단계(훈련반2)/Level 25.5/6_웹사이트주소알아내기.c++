#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string str;

string words_s[2] = {"http://","https://"};
string words_e[4] = {".com", ".co.kr", ".org", ".net"};

vector<pair<int, char>> result;

int s, e;

bool cmp(pair<int, char> p1, pair<int, char> p2){
    return p1.first < p2.first;
}

int main(){
    
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - ('A'-'a');
        }
    }

    for(int i=0;i<2;i++){
        s = str.find(words_s[i]);
        if(s != string::npos) result.push_back({s + words_s[i].length(),'s'}); // 시작단어의 끝나는 위치를 저장해야 끝단어 사이 글자수를 구할 수 있음

        while(s != string::npos){
            s = str.find(words_s[i], s+1);
            if(s != string::npos) result.push_back({s + words_s[i].length(),'s'});
        }
    }

    for(int i=0;i<4;i++){
        e = str.find(words_e[i]);
        if(e != string::npos) result.push_back({e,'e'});

        while(e != string::npos){
            e = str.find(words_e[i], e+1);
            if(e != string::npos) result.push_back({e,'e'});
        }
    }

    sort(result.begin(), result.end(), cmp);

    // for(int i=0;i<result.size();i++){
    //     cout << result[i].first << " " << result[i].second << "\n";
    // }

    int cnt = 0;
    for(int i=0;i<result.size()-1;i++){
        if(result[i].second == 's' && result[i+1].second == 'e' && result[i+1].first - result[i].first >= 3) cnt++;
    }
    cout << cnt << "개";

    return 0;
}