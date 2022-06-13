#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int level;

void func(int lev){
    cout << lev;
    if(lev == level) return;
    func(lev+1);
    func(lev+1);
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