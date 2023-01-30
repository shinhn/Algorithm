#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if(num!=0){
            pq.push(make_pair(abs(num),num));
        }
        else{
            if(pq.empty()) {
                cout << "0" << "\n";
            }
            else {
                cout << pq.top().second << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}