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

    int row, column;
    char ch;

    cin >> row >> column >> ch;

    for(int i=0;i<2;i++){
        for(int j=0;j<row;j++){
            for(int k=0;k<column;k++){
                cout << ch;
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}