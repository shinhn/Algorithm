#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<vector<int>> dp;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    vector<int> arr;
    arr.push_back(triangle[0][0]);
    dp.push_back(arr);
    
    for(int i=1;i<triangle.size();i++){
        arr.clear();
        for(int j=0;j<triangle[i].size();j++){
            if(j == 0){ // 맨 왼쪽
                arr.push_back(dp[i-1][j] + triangle[i][j]);
            }
            else if(j == triangle[i].size() - 1){ // 맨 오른쪽
                arr.push_back(dp[i-1][j-1] + triangle[i][j]);
            }
            else{ // 중간
                if(dp[i-1][j-1] < dp[i-1][j]) arr.push_back(dp[i-1][j] + triangle[i][j]);
                else arr.push_back(dp[i-1][j-1] + triangle[i][j]);
            }
        }
        dp.push_back(arr);
    }
    
    answer = *max_element(dp[dp.size()-1].begin(), dp[dp.size()-1].end());
    
    return answer;
}