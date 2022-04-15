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

    char arr[3][10];
    int i, j;

    for(i=0;i<3;i++){
        string str;
        cin >> str;
        for(j=0;j<str.length();j++){
            arr[i][j] = str[j];
        }
        arr[i][j] = '\0';
    }

    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            if(arr[i][j] == '\0'){
                cout << arr[i][j-1];
                break;
            }
        }
    }


    return 0;
}