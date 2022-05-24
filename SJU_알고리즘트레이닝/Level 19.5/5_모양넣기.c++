#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct sketchbook{
    char image[3][3];
};

sketchbook sk;
int alp[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        string str;
        cin >> str;
        sk.image[i][0] = str[0];
        sk.image[i][1] = str[1];
        sk.image[i][2] = str[2];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char ch = sk.image[i][j];
            alp[ch-'A'] ++;
        }
    }

    for(int i=0;i<26;i++){
        if(alp[i] >= 1) cout << char(i+'A');
    }

    return 0;
}