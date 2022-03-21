#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp_music_cnt(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}

bool cmp_music(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    unordered_map<string, int> music_cnt; // map<장르, 총 재생 횟수>
    unordered_map<string, vector<pair<int, int>>> music; // map<장르, vector<pair<재생 횟수, 고유번호>>>
    
    for(int i=0;i<genres.size();i++){
        music_cnt[genres[i]] += plays[i];
        music[genres[i]].push_back(make_pair(plays[i], i));
    }
    
    // music_cnt 정렬
    // 정렬을 위해 vector로 변환
    vector<pair<string, int>> music_cnt_sort;
    for(auto i:music_cnt){
        music_cnt_sort.push_back(make_pair(i.first, i.second));
    }
    sort(music_cnt_sort.begin(), music_cnt_sort.end(), cmp_music_cnt);
    
    // music 정렬
    for(auto &i:music){
        sort(i.second.begin(), i.second.end(), cmp_music);
    }
    
    // 순서대로 answer에 수록
    for(int i=0;i<music_cnt_sort.size();i++){
        for(auto j:music){
            if(music_cnt_sort[i].first == j.first){ // 장르가 같을 경우
                for(int k=0;k<j.second.size() && k<2;k++){ // 장르 별로 최대 2개씩만 수록
                    answer.push_back(j.second[k].second);
                }
            } 
        }
    }
    
    return answer;
}
