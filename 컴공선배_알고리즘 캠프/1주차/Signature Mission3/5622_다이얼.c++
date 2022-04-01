#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int sum = 0;
    for(int i=0;i<str.length();i++){
        if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') sum+=3;
        if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') sum+=4;
        if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') sum+=5;
        if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') sum+=6;
        if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') sum+=7;
        if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') sum+=8;
        if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') sum+=9;
        if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z') sum+=10;
    }

    cout << sum << "\n";

    return 0;
}