#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m;
    cin >> h >> m;

    int total = h*60 + m;
    total-=45;

    if(total<0)total = 24*60+total;

    cout << total/60 << " " << total%60 << "\n";

    return 0;
}