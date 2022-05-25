#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int num;

void print(int n){
    if(n==0) return;
    print(n/2);
    cout << n << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num;
    print(num);

    return 0;
}