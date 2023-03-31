#include <string>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int num = brown + yellow;
    
    for(int i=3;i<=num;i++){
        
        if(num % i == 0){
            int h = i;
            int w = num / i;
            
            if((h-2)*(w-2) == yellow){
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    
    return answer;
}