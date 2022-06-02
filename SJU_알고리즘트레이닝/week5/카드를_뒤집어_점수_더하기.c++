#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
vector<int> card;
int A, B;
vector<int> status;

void dfs(int idx){
    if(idx == N){
        int sum = 0;
        for(int i=0;i<status.size();i++){
            sum += status[i];
        }
        if(sum >= A && sum <= B) ans ++;

        return;
    }

    status.push_back(card[idx]);
    dfs(idx+1);
    status.pop_back();

    status.push_back(-card[idx]);
    dfs(idx+1);
    status.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        card.push_back(num);
    }
    cin >> A >> B;

    dfs(0);

    cout << ans << "\n";

    return 0;
}