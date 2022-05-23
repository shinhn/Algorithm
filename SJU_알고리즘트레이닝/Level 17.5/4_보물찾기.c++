#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

char arr[2][3] = {{'G','K','T'},{'P','A','C'}};
char ch1, ch2;

bool isExist(char ch){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == ch) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch1 >> ch2;

    if(isExist(ch1) && isExist(ch2)) cout << "대발견\n";
    else if(!isExist(ch1) && !isExist(ch2)) cout << "미발견\n";
    else cout << "중발견\n";
    
    return 0;
}