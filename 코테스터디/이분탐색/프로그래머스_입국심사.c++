#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
각 심사대는 동시에 심사를 하기 때문에 실제 심사처럼 생각하면 계산하기 복잡하다.
동시에 심사를 하기 때문에 인당 몇분이 걸리는지가 아니라, 각 심사대가 1분에 몇명 심사를 하는지 계산하면
각 심사대는 동시에 심사하여 총 n 명을 심사하는데 얼마나 걸리는지 계산하기 편함
*/

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    long long low = 1;
    long long high = n*((long long)*max_element(times.begin(), times.end())); // 주의 : vector는 int형이므로 형변환을 해줘야 함
    
    while(low <= high){
        long long mid = (low+high)/2;
        
        long long people = 0; // 심사를 마친 사람의 수
        for(int i=0;i<times.size();i++){
            people += mid/times[i];
        }
        
        if(n <= people) {
            answer = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    
    return answer;
}