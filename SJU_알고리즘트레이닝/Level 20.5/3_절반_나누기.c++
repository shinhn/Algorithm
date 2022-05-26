#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
vector<char> str1, str2;

bool isSame(){
    int k;
    for(k=0;k<min(str1.size(),str2.size());k++){
        if(str1[k]!=str2[k]) return false;
    }

    if(k<str1.size() || k<str2.size()) return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    int i;
    for(i=0;i<str.size()/2;i++){
        str1.push_back(str[i]);
    }
    for(int j=i;j<str.size();j++){
        str2.push_back(str[j]);
    }

    if(isSame()) cout << "동일한문장\n";
    else cout << "다른문장\n";

    return 0;
}