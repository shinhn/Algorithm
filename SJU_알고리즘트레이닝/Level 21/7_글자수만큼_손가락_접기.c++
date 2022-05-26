#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
int len;

void print(int n){
    if(n==1) {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n-1);
    cout << n << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    len = str.length();

    print(len);


    return 0;
}