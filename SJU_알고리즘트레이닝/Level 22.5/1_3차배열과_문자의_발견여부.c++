#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char arr[2][2][3] = {
    {{'A','T','B'},{'C','C','B'}},
    {{'A','A','A'},{'B','B','C'}}
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char ch;
    cin >> ch;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                if(arr[i][j][k] == ch){
                    cout << "발견\n";
                    return 0;
                }
            }
        }
    }

    cout << "미발견\n";
    
    return 0;
}