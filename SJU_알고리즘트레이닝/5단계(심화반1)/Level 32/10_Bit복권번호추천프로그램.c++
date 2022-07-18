#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> ans;
int cnt[10];

bool cmp(int n1, int n2){
    if(cnt[n1] != cnt[n2]){
        return cnt[n1] > cnt[n2];
    }
    else{
        return n1 < n2;
    }
}

int main(){

    cin >> n;

    int num[n][n];
    int bit[n][n];

    fill(&num[0][0], &num[n-1][n-1], 0);
    fill(&bit[0][0], &bit[n-1][n-1], 0);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> num[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> bit[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bit[i][j] == 1){
                ans.push_back(num[i][j]);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cnt[ans[i]] ++;
    }

    sort(ans.begin(), ans.end(), cmp);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}