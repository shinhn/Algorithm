#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
bool visited[10];

struct q{
    int num, s, b;
};

vector<q> qs;
vector<string> ans;

bool func(string target){
    int cnt = 0;

    for(int i=0;i<qs.size();i++){
        string num = to_string(qs[i].num);
        int s = 0, b = 0;

        for(int j=0;j<3;j++){
            if(num[j] == target[j]) s++;
        }

        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j == k) continue;

                if(num[j] == target[k]) b++;
            }
        }

        if(s == qs[i].s && b == qs[i].b) cnt++;
    }

    if(cnt == qs.size()) return true;
    return false;
}

void dfs(int cnt, string target){
    if(cnt == 3){ // 세자리 수일 때 판별
        if(func(target)){
            ans.push_back(target);
        }
    }

    for(int i=1;i<=9;i++){
        if(!visited[i]){
            visited[i] = true;
            dfs(cnt+1, target + to_string(i));
            visited[i] = false;
        }
    }
}

int main(){

    cin >> N;

    for(int i=0;i<N;i++){
        int num, s, b;
        cin >> num >> s >> b;
        q tmp = {num, s, b};

        qs.push_back(tmp);
    }

    dfs(0,"");

    cout << ans.size() << "\n";

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "\n";
    }

    return 0;
}