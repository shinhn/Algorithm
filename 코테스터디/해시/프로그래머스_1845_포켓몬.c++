#include <vector>
#include <iostream>
#include <map>
using namespace std;

map<int, int> pocketmons;

int solution(vector<int> nums)
{
    int answer = 0, cnt = 0;
    int n = nums.size()/2;
    
    for(int i=0;i<nums.size();i++){
        pocketmons[nums[i]] ++;
    }
    
    for(auto i:pocketmons){
        cnt ++;
    }
    
    if(cnt >= n) answer = n;
    else answer = cnt;
    
    return answer;
}