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

    for(int i=0;i<str.size();i++){
        for(int j=0;j<=i;j++){
            cout << str[j];
        }
        cout << "\n";
    }

    return 0;
}