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
    getline(cin, str);

    int cnt = 1;
    if(str[0] == ' '){
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] == ' ')
                cnt++;
        }
    }
    else{
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
                cnt++;
        }
    }

    if(str[str.length()-1] == ' ') cnt--;

    cout << cnt << "\n";

    return 0;
}