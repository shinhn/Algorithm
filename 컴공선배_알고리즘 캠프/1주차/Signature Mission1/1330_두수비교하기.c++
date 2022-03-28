#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(a>b)cout << ">";
    if(a<b)cout << "<";
    if(a==b) cout << "==";

    return 0;
}