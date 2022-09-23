#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

string str1, str2;
map<string, int> words1, words2;
int all; // 다중집합 원소의 수

int main(){

    getline(cin, str1);
    getline(cin, str2);

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    for(int i=0;i<str1.size()-1;i++){
        string str = "";

        if(str1[i] < 'a' || str1[i] > 'z') continue;
        if(str1[i] == ' ') continue;
        if(str1[i+1] == ' ') continue;

        str+=str1[i];
        str+=str1[i+1];

        words1[str] ++;
    }

    // for(map<string, int> ::iterator i=words1.begin();i!=words1.end();i++){
    //     cout << i->first << "\n";
    // }

    for(int i=0;i<str2.size()-1;i++){
        string str = "";

        if(str2[i] < 'a' || str2[i] > 'z') continue;
        if(str2[i] == ' ') continue;
        if(str2[i+1] == ' ') continue;

        str+=str2[i];
        str+=str2[i+1];

        words2[str] ++;
    }

    // cout << "\n";
    // for(map<string, int> ::iterator i=words2.begin();i!=words2.end();i++){
    //     cout << i->first << "\n";
    // }

    for(map<string, int> ::iterator i=words1.begin();i!=words1.end();i++){
        if(words2.count(i->first)) {
            all++;
        }
    }

    float ans = (float)all/(words1.size() + words2.size() - all)*65536;
    cout << int(ans) << "\n";

    return 0;
}