#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> tmp;
    for(string p : participant){
        tmp[p]++; // map에 참가자 이름(string)을 추가하고 int++
    }
    for(string c : completion){
        tmp[c]--;
    }
    for(auto pair : tmp){
        if(pair.second > 0) answer = pair.first;
    }
    
    return answer;
}