#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int p1[5] = {1, 2, 3, 4, 5};
    int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int score1 = 0, score2 = 0, score3 = 0;
    for(int i=0;i<answers.size();i++){
        if(p1[i % 5] == answers[i]) score1++;
        if(p2[i % 8] == answers[i]) score2++;
        if(p3[i % 10] == answers[i]) score3++;
    }
    
    vector<int> score;
    score.push_back(score1);
    score.push_back(score2);
    score.push_back(score3);
    
    for(int i=0;i<score.size();i++){
        if(score[i] == *max_element(score.begin(), score.end())) answer.push_back(i+1);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}