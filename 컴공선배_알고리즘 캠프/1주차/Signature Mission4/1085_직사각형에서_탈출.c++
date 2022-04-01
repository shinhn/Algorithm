#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int l1 = min(w - x, x);
    int l2 = min(h - y, y);

    cout << min(l1, l2);
}