#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void BBQ(int n){
    if(n==2) return;
    BBQ(n+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    BBQ(0);

    return 0;
}