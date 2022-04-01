#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n;
    ll ans = 0;
    ll sum = 0;
    cin >> n;
    for (ll i = 1; sum < n; i++)
    {
        if (sum + i <= n)
        {
            sum += i;
            ans++;
        }
        if (sum + i > n)
        {
            cout << ans << '\n';
            break;
        }
    }
}