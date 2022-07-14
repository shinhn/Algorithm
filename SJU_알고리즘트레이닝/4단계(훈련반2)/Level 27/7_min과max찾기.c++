#include <iostream>
#include <queue>
using namespace std;

int number[6];
string command;

priority_queue<int, vector<int>> que;

int main(){

    for(int i=0;i<6;i++){
        cin >> number[i];
        que.push(number[i]);
    }

    cin >> command;

    for(int i=0;i<6;i++){
        if(command[i] == 'x'){
            cout << que.top();
            que.pop();
        }
        else{
            vector<int> tmp;

            while(!que.empty()){
                tmp.push_back(que.top());
                que.pop();
            }

            cout << tmp[tmp.size()-1];

            for(int i=0;i<tmp.size()-1;i++){
                que.push(tmp[i]);
            }
        }
    }

    return 0;
}