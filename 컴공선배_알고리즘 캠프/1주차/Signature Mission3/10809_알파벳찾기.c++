#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int alpha[26];
    fill(alpha, alpha+26, -1);

    string str;
    cin >> str;

    for(int i=0;i<str.size();i++){
        if (alpha[str[i] - 'a'] != -1)continue;
        
        alpha[str[i] - 'a'] = i; 
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << " ";
    }

    return 0;
}