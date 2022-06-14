#include <iostream>
#include <algorithm>
using namespace std;

string str1, str2, ans;

int main(){
    cin >> str1 >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    ans = str1 + str2;
    cout << ans;

    return 0;
}