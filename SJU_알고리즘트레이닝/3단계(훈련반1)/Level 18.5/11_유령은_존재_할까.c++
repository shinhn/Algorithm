#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
int alp[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    size_t nPos = str.find("GHOST");

    if(nPos != string::npos) cout << "존재";
    else cout << "존재하지 않음";

    return 0;
}