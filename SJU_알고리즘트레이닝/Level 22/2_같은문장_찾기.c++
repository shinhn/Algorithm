#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string str1, str2, str3;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str1 >> str2 >> str3;

    if(str1 == str2 && str2 == str3 && str1 == str3) cout << "WOW";
    else if(str1 == str2 || str2 == str3 || str1 == str3) cout << "GOOD";
    else cout << "BAD";
    
    return 0;
}