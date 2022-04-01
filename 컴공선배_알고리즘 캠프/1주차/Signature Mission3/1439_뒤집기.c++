#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin >> S;

    int n_0 = 0, n_1 = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] != S[i+1]){
            if(S[i]=='0') n_0++;
            else n_1++;
        }
    }

    cout << min(n_0, n_1) << "\n";

    return 0;
}