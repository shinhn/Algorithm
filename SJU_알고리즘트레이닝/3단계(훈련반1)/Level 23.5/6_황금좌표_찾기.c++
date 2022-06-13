#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map1[4][4];
char map2[4][4] = {
    {'A','B','C','D'},
    {'B','B','A','B'},
    {'C','B','A','C'},
    {'B','A','A','A'}
};

int alpa[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        string str;
        cin >> str;
        map1[i][0] = str[0];
        map1[i][1] = str[1];
        map1[i][2] = str[2];
        map1[i][3] = str[3];
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(map1[i][j] == map2[i][j]){
                alpa[map1[i][j]-'A'] ++;
            }
        }
    }

    int max=-1,idx;
    for(int i=0;i<26;i++){
        if(max<alpa[i]){
            max = alpa[i];
            idx = i;
        }
    }

    cout << char(idx+'A');

    return 0;
}