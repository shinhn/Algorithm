#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int a, b;

void print(int n){
    if(n==b){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n+1);
    cout << n << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    print(a);

    return 0;
}