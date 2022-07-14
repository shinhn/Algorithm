#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> que;

int main(){

    int N;
    cin >> N;

    while(N--){
        string op;
        cin >> op;

        int n;
        cin >> n;

        if(op == "push"){
            que.push(n);
        }
        if(op == "pop"){
            for(int i=0;i<n;i++){
                cout << que.top() << " ";
                que.pop();
            }
            cout << "\n";
        }
        if(op == "add"){
            int tmp = que.top();
            que.pop();
            que.push(tmp + n);
        }
    }

    return 0;
}