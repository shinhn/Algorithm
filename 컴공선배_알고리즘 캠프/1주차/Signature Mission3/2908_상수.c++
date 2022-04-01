#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;

    char tmp;
    tmp = str1[0];
    str1[0] = str1[2];
    str1[2] = tmp;

    tmp = str2[0];
    str2[0] = str2[2];
    str2[2] = tmp;

    if (stoi(str1) < stoi(str2)) cout << str2 << "\n";
    else
        cout << str1 << "\n";

    return 0;
}