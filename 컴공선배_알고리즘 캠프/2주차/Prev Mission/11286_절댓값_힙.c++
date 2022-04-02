#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;

    for(int i=0;i<N;i++){
        int num;
        cin >> num;

        if(num != 0){
            que.push(make_pair(abs(num), num));
        }
        else{
            if(que.empty()) cout << "0" << "\n";
            else{
                cout << que.top().second << "\n";
                que.pop();
            }
        }
    }

    return 0;
}