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

    int Y, X;
    char arr[6][3];
    int ch = 'A';

    cin >> Y >> X;
    for (int x=2; x>=0; x--){
        for (int y=5; y>=0; y--){
            arr[y][x] = char(ch);
            ch ++;
        }
    }

    cout << arr[Y][X] << "\n";
    

    return 0;
}