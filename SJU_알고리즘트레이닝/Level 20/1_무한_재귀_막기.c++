#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void bbq(int cnt){
    if(cnt==5)return;
    bbq(cnt+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bbq(1);

    return 0;
}