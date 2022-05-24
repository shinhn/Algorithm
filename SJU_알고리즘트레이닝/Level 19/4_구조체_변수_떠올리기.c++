#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

struct Data{
    int x;
    int y;
    int z;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Data a, b;

    cin >> a.x >> a.y >> a.z;
    cin >> b.x >> b.y >> b.z;

    cout << a.x+b.x << "\n";
    cout << a.y+b.y << "\n";
    cout << a.z+b.z << "\n";

    return 0;
}