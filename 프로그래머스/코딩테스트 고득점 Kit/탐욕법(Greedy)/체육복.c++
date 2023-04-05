#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    for(int i=0;i<lost.size();i++){
        int num = lost[i];
        if(find(reserve.begin(), reserve.end(), num) == reserve.end()) continue;
        
        // 여벌 체육복을 가져온 학생이 체육복을 도난당한 경우 -> 남은 체육복이 하나이기에 두 벡터에서 모두 제거
        reserve.erase(remove(reserve.begin(), reserve.end(), num), reserve.end());
        lost.erase(remove(lost.begin(), lost.end(), num), lost.end());
        
        i--; // lost 벡터에서 원소 하나를 지웠으므로 반복문 인덱스도 한칸 줄임
    }
    
    // 맨 앞부터 체육복을 빌려주기(greedy) 위한 정렬
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    answer = n - lost.size();
    
    for(int i=0;i<lost.size();i++){
        int num = lost[i];
        if(num - 1 >= 1 && find(reserve.begin(), reserve.end(), num - 1) != reserve.end()){ // 바로 앞에 빌려줄 사람이 있는 경우
            answer ++;
            reserve.erase(remove(reserve.begin(), reserve.end(), num - 1), reserve.end());
        }
        else if(num + 1 <= n && find(reserve.begin(), reserve.end(), num + 1) != reserve.end()){ // 바로 뒤에 빌려줄 사람이 있는 경우
            answer ++;
            reserve.erase(remove(reserve.begin(), reserve.end(), num + 1), reserve.end());
        }
    }
    
    return answer;
}