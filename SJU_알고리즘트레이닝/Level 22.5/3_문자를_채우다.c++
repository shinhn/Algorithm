#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char arr[3][3][3];
char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                arr[i][j][k] = char(ch+i);
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout << arr[i][j][k];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    
    return 0;
}