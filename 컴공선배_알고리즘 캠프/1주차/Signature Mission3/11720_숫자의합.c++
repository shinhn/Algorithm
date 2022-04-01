#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum=0;
    cin >> n;
    string num;
    cin >> num;

    for(int i=0;i<n;i++){
        sum += int(num[i]) - int('0');
    }

    cout << sum << "\n";

    return 0;
}