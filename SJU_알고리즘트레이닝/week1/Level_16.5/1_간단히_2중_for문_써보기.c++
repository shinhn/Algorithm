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

    int a, b, c;
    cin >> a >> b >> c;
    
    for(int i=0;i<c;i++){
        for(int j=a;j<=b;j++){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}