#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int level;
vector<char> path;

void func(int lev){
    if(lev == level){
        for(int i=0;i<path.size();i++){
            cout << path[i];
        }
        cout << "\n";
        return;
    }

    path.push_back('B');
    func(lev+1);
    path.pop_back();

    path.push_back('G');
    func(lev+1);
    path.pop_back();
    
    path.push_back('T');
    func(lev+1);
    path.pop_back();

    path.push_back('K');
    func(lev+1);
    path.pop_back();

    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> level;

    func(0);
    
    return 0;
}