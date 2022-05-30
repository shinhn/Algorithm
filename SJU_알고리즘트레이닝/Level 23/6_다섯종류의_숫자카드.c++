#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string input;
int number[5];
vector<int> combi;
int ans;

void dfs(int depth){
    if(depth == 4){
        bool flag = true;
        for(int i=0;i<3;i++){
            if(abs(combi[i]-combi[i+1]) > 3){
                flag = false;
            }
        }

        if(flag) ans ++;
        return;
    }

    for(int i=0;i<5;i++){
        combi.push_back(number[i]);
        dfs(depth+1);
        combi.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    for(int i=0;i<5;i++){
        number[i] = input[i] - '0';
    }

    dfs(0);

    cout << ans << "\n";

    return 0;
}