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

    char arr[4][4] = {
        {'A', 'B', 'K', 'T'},
        {'K', 'F', 'C', 'F'},
        {'B', 'B', 'Q', 'Q'},
        {'T', 'P', 'Z', 'F'}
    };

    int cnt=0;
    char ch1, ch2;
    cin >> ch1 >> ch2;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (arr[i][j] == ch1 || arr[i][j] == ch2) cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}