#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - ('a'-'A');
        }
    }
    
    int alpa[26];
    fill(alpa, alpa+26, 0);
    for (int i = 0; i < str.length(); i++){
        alpa[str[i]-'A']++;
    }

    int max_alpa=-1, max_index, flag=0;
    for (int i = 0; i < 26; i++)
    {
        if (alpa[i] > max_alpa){
            max_alpa = alpa[i];
            max_index = i;
            flag=0;
        }
        if (alpa[i] == max_alpa){
            flag++;
        }
    }

    if(flag >= 2) cout << "?" << "\n";
    else cout << char('A' + max_index) << "\n";

    return 0;
}