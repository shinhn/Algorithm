#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> vec;

bool isOk(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i == 0) cnt++;
    }
    
    if(cnt == 2) return true;
    
    return false;
}

int solution(string numbers) {
    int answer = 0;
    
    // 모든 조합 추출
    sort(numbers.begin(), numbers.end());
    
    do{
        for(int i=1;i<=numbers.size();i++){
            vec.push_back(stoi(numbers.substr(0,i)));
        }
        
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    // 중복 제거
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    // 소수 판별
    for(int i=0;i<vec.size();i++){
        if(isOk(vec[i])) answer++;
    }
    
    return answer;
}