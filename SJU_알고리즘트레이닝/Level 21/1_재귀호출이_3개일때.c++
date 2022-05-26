#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void func(int depth){
    if(depth == 2) return;
    func(depth+1);
    func(depth+1);
    func(depth+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    func(0);

    return 0;
}