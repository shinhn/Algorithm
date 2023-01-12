#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int max_x = 0, max_y = 0;
    
    for(int i=0;i<sizes.size();i++){
        vector<int> card = sizes[i];
        if(card[0] < card[1]){
            int tmp = card[0];
            card[0] = card[1];
            card[1] = tmp;
        }
        
        max_x = max(max_x, card[0]);
        max_y = max(max_y, card[1]);
    }
    
    answer = max_x * max_y;
    
    return answer;
}