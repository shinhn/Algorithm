#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct cmp{
    bool operator()(string a, string b){
        return a.length() > b.length();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<string, vector<string>, cmp> que;

    for(int i=0;i<4;i++){
        string str;
        cin >> str;
        que.push(str);
    }

    while(!que.empty()){
        cout << que.top() << "\n";
        que.pop();
    }
    return 0;
}