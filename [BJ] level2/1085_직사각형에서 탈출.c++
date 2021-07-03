#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int l1 = min(w-x, x); // w or x좌표축까지의 거리중 최소 거리
    int l2 = min(h-y, y); // h or y좌표축까지의 거리중 최소 거리

    cout << min(l1, l2); // 그중에서 최소 거리
}