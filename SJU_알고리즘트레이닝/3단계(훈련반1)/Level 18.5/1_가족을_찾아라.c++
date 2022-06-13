#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char arr[2][3] = {
    {'G','K','G'},
    {}
};

int alp[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> arr[1][i];
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            alp[arr[i][j]-'A'] ++;
        }
    }

    for(int i=0;i<26;i++){
        if(alp[i] >= 3) {
            cout << "있음\n";
            return 0;
        }
    }

    cout << "없음\n";
    

    return 0;
}