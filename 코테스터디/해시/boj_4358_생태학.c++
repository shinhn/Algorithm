#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <stdio.h>

using namespace std;

map<string, int> tree;
string name;
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(getline(cin, name)){
        tree[name] = tree[name] + 1;
        cnt++;
    }

    cout << fixed;
    cout.precision(4);

    for(auto i : tree){
        float per = float(i.second) / cnt * 100;
        cout << i.first << " " << per << "\n";
    }


    return 0;
}