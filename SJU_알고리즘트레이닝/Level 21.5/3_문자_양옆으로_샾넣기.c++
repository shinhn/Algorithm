#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
char ch1, ch2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    cin >> ch1 >> ch2;

    for(int i=0;i<str.length();i++){
        if(str[i] == ch1 || str[i] == ch2){
            if(str[i-1]) str[i-1] = '#';
            if(str[i+1]) str[i+1] = '#';
        }
    }

    cout << str << "\n";

    return 0;
}