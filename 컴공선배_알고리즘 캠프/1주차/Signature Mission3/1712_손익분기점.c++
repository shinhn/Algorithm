#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, sum = 0, i=0;
    cin >> A >> B >> C;

    if(C <= B)
        cout << -1 << "\n";
    else {
        cout << A/(C-B) + 1 << "\n";
    }

    return 0;
}