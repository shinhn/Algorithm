#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<pair<int, char> > printer; // 중요도, 알파벳
int N;
char ch;

int main(){
    cin >> N;
    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        printer.push(make_pair(tmp, char('a'+i)));
    }
    cin >> ch;

    int cnt=1;
    while(!printer.empty()){
        if(printer.top().second == ch) {
            cout << cnt;
            break;
        }
        cnt++;
        printer.pop();
    }

}