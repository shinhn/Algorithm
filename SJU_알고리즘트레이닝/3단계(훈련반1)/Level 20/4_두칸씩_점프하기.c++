#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void abc(int n, int cnt){
    if(cnt==3) {
        cout << n << " ";
        return;
    }

    abc(n+2, cnt+1);
    cout << n << " ";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;
    abc(num, 0);

    return 0;
}