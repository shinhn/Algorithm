#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int level, branch;

void func(int lev){
    if(lev == level) return;
    for(int i=0;i<branch;i++){
        func(lev+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> level >> branch;

    func(0);

    return 0;
}