#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i] == reserve[j]){ // 여벌 체육복을 가져온 학생이 체육복을 도난당한 경우 -> 남은 체육복이 하나이기에 두 벡터에서 모두 제거
                lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                
                i--; // lost 벡터에서 원소 하나를 지웠으므로 반복문 인덱스도 한칸 줄임
            }
        }
    }
    
    // 맨 앞부터 체육복을 빌려주기(greedy) 위한 정렬
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    answer = n - lost.size();
    
    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]-1 == reserve[j] || lost[i]+1 == reserve[j]){ // 바로 앞이나 뒤에 빌려줄 사람이 있는 경우
                answer++;
                reserve.erase(reserve.begin()+j);
                break;
            }
        }
    }
    
    return answer;
}