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
    
    char ch = 'A';
    int index = 0;
    for(int i=0;i<str.length();i++){
        if(ch < str[i]){
            ch = str[i];
            index = i;
        }
    }
    cout << index << "\n";
    
    ch = 'A';
    index = 0;
    for(int i=0;i<str.length();i++){
        if(ch > str[i]){
            ch = str[i];
            index = i;
        }
    }
    cout << index << "\n";

    return 0;
}