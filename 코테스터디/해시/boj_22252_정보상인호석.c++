#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int Q, op, k, b;
long long ans;
string name;
map<string, priority_queue<int>> info;

void print_info(){
    for(auto i : info){
        cout << i.first << " ";
        while(!i.second.empty()){
            cout << i.second.top() << " ";
            i.second.pop();
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> op;

        if(op==1){
            cin >> name;
            cin >> k;
            if(info.find(name) == info.end()){ // 새로운 정보 고릴라인 경우
                priority_queue<int> que;
                for(int j=0;j<k;j++){
                    int num;
                    cin >> num;
                    que.push(num);
                }
                info.insert({name, que});
            }
            else{ // 기존 정보 고릴라인 경우
                for(int j=0;j<k;j++){
                    int num;
                    cin >> num;
                    info[name].push(num);
                }
            }
        }
        else{
            cin >> name;
            cin >> b;
            if(info.find(name) == info.end()) continue; // 존재하지 않는 고릴라인 경우 패스

            if(info[name].size() > b){
                for(int j=0;j<b;j++){
                    ans += info[name].top();
                    info[name].pop();
                }
            }
            else{ // 고릴라가 가진 정보가 b개 이하이면 가진 모든 정보를 구매
                while(!info[name].empty()){
                    ans += info[name].top();
                    info[name].pop();
                }
            }
        }

        // print_info();
        // cout << "ans : " << ans << "\n";
    }

    cout << ans << "\n";

    return 0;
}