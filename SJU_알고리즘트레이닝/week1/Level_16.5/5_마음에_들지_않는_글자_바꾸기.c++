#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    
    char ch1, ch2;
    cin >> ch1 >> ch2;
    
    for(int i=0;i<str.length();i++){
        if(str[i] == ch1) str[i] = ch2;
    }
    
    cout << str << "\n";

    return 0;
}