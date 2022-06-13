#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
vector<char> present;

bool isExist(int idx){
    for(int i=0;i<present.size();i++){
        if(present[i] == str[idx]) return true;
    }

    return false;
}

void func(int depth){
    if(depth == 3){
        for(int i=0;i<3;i++){
            cout << present[i];
        }
        cout << "\n";
        return;
    }

    for(int i=0;i<4;i++){
        if(isExist(i)) continue;
        present.push_back(str[i]);
        func(depth+1);
        present.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    func(0);
    
    return 0;
}