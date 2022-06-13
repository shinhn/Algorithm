#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;

void print(int idx){
    if(idx == str.size())return;
    cout << str[idx];
    print(idx+1);
    if(idx==str.size()-1) cout << "\n";
    cout << str[idx];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    print(0);

    return 0;
}