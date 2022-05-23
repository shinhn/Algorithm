#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int bit[7];
int result[7];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<7;i++){
        cin >> bit[i];
    }

    for(int i=0;i<7;i++){
        if(bit[i] == 0) result[i] = 0;
        else result[i] = 7;

        cout << result[i];
    }
    
    return 0;
}