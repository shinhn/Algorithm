#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int> que_max;
priority_queue<int, vector<int>, greater<int>> que_min;
int N;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;

        if(que_max.size() == que_min.size()) que_max.push(num);
        else que_min.push(num);

        if(!que_max.empty() && !que_min.empty() && que_max.top() > que_min.top()){
            int tmp_max = que_max.top();
            int tmp_min = que_min.top();
            que_max.pop();
            que_min.pop();
            que_max.push(tmp_min);
            que_min.push(tmp_max);
        }

        cout << que_max.top() << "\n";
    }

    // while(!que_max.empty()){
    //     cout << que_max.top() << " ";
    //     que_max.pop();
    // }
    // cout << "\n";
    // while(!que_min.empty()){
    //     cout << que_min.top() << " ";
    //     que_min.pop();
    // }
    // cout << "\n";
}