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

    vector<char> arr;
    int idx;
    string str;

    cin >> str;
    cin >> idx;

    for(int i=0;i<str.length()+1;i++){
        if(i < idx) arr.push_back(str[i]);
        if(i == idx) arr.push_back('A');
        if(i > idx) arr.push_back(str[i-1]);
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i];
    }
   

    return 0;
}