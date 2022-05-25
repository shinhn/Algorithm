#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void print(int n){
    cout << n << " ";
    if(n==0) return;
    print(n-1);
    cout << n << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    print(n);

    return 0;
}