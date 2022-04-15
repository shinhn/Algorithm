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

    string str[3];
    
    for(int i=0;i<3;i++){
        cin >> str[i];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<str[i].length();j++){
            if(str[i][j] == 'M'){
                cout << "M이 존재합니다" << '\n';
                return 0;
            }
        }
    }

    cout << "M이 존재하지 않습니다" << '\n';

    return 0;
}