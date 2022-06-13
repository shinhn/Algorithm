#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=5;
    cout << "t에서 1씩 증가=" << t << " " << t+1 << " " << t+2 << "\n";
    cout << "t에서 2씩 감소=" << t << " " << t-2 << " " << t-4 << "\n";
    
    return 0;
}