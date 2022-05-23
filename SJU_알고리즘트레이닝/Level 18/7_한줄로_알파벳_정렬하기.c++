#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char alphabet[5][3] = {
    {'A', 'B', 'C'},
    {'A', 'G', 'H'},
    {'H', 'I', 'J'},
    {'K', 'A', 'B'},
    {'A', 'B', 'C'}
};

int cnt[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cnt[alphabet[i][j]-'A'] ++;
        }
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<cnt[i];j++){
            cout << char(i+'A');
        }
    }
    

    return 0;
}