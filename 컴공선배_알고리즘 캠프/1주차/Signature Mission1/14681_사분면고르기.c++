#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;

    if(x<0 && y<0) cout << "3";
    if(x>0 && y<0) cout << "4";
    if(x>0 && y>0) cout << "1";
    if(x<0 && y>0) cout << "2";


    return 0;
}