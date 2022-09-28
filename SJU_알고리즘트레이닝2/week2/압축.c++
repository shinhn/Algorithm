#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

string msg;
map<string, int> dict; // 단어, 색인 번호
vector<int> ans;
int num = 0;

int main(){

    for(num=0;num<26;num++){
        string str;
        str += char('A'+num);
        dict[str] = num+1;
    }

    cin >> msg;

    for(int i=0;i<msg.size();i++){
        string str;
        str += msg[i];

        if(i == msg.size()-1){
            ans.push_back(dict.find(str)->second);
            break;
        }
        
        for(int j=i+1;j<msg.size();j++){
            string before = str;
            str += msg[j];

            if(dict.count(str)){ // 사전에 있을 경우
                if(j == msg.size()-1) {
                    ans.push_back(dict.find(str)->second); // 끝까지 갔을 경우, 출력
                }
                // 아직 끝까지 못간 경우 다음 글자까지 있는지 판단 위해 계속 반복문 수행
                i++; // 검색 된 이전 문자열 다음 문자부터 검색을 위함
            }
            else{ // 사전에 없을 경우
                num++;
                dict[str] = num; // 사전 추가

                ans.push_back(dict.find(before)->second); // 이전 문자열 출력

                i += j-i-1; // 검색 된 이전 문자열 다음 문자부터 검색을 위함
                break;
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }


    return 0;
}
