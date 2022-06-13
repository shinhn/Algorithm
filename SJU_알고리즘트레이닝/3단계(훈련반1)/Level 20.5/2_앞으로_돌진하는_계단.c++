#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    for(int i=str.size()-1;i>=0;i--){
        for(int j=i;j<str.size();j++){
            cout << str[j];
        }
        cout << "\n";
    }

    return 0;
}