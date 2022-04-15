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
    int idx;
    vector<char> arr;

    cin >> str;
    cin >> idx;

    for(int i=0;i<str.length();i++){
        if(i == idx) continue;
        arr.push_back(str[i]);
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i];
    }

    cout << "\n";

    return 0;
}