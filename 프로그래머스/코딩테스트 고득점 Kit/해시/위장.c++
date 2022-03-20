#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, int> category;
    
    // map에 옷 가짓수 저장
    for(int i=0;i<clothes.size();i++){
        category[clothes[i][1]] ++;
    }
    
    for(auto pair:category){
        answer *= pair.second+1;
    }
    
    answer--;
    
    return answer;
}

int main(){
    vector<vector<string>> clothes =
    {{"yellowhat", "headgear"},
     {"bluesunglasses", "eyewear"},
     {"green_turban", "headgear"}};
    
    solution(clothes);
    
    
    return 0;
}