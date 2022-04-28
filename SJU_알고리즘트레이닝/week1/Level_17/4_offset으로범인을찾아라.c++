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

    char arr[3][4] = {{'A','T','K','B'},{'C','Z','F','D'},{'H','G','E','I'}};
    
    char offset;
    int y, x, i, j;
    bool flag=true; 
    cin >> offset >> y >> x;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(arr[i][j]==offset){
                flag = false;
                break;
            }
        }
        if(flag == false) break;
    }
    
    cout << arr[i+y][j+x] << "\n";

    return 0;
}