#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;

int main(){

    cin >> N >> M;
    vector<string> arr[N];
    int cnt[N];
    fill(cnt,cnt+N, 0);

    while(M--){
        int n;
        string name;

        cin >> n >> name;

        arr[n].push_back(name);
        cnt[n] ++;
    }

    int idx = 0, max_cnt = cnt[0];
    for(int i=1;i<N;i++){
        if(max_cnt < cnt[i]){
            idx = i;
            max_cnt = cnt[i];
        }
    }

    for(int i=0;i<arr[idx].size();i++){
        cout << arr[idx][i] << " ";
    }

    return 0;
}