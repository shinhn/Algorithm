#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, V, day = 1;
    cin >> A >> B >> V;

    day += (V-A)/(A-B);

    if((V-A)%(A-B) != 0) day++;

    cout << day << "\n";

    return 0;
}