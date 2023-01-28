#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int N, M, cnt;
map<string, int> dict1;
map<int, string> dict2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<N;i++){
        string name;
        cin >> name;
        cnt++;
        dict1.insert({name, cnt});
        dict2.insert({cnt, name});
    }

    for(int i=0;i<M;i++){
        string op;
        cin >> op;
        
        if(op[0] >= '1' && op[0] <= '9') cout << dict2[stoi(op)] << "\n";
        else cout << dict1[op] << "\n";
    }

    return 0;
}