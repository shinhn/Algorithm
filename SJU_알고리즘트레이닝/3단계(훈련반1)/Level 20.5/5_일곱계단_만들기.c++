#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char ch;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch;

    for(int i=3;i>=1;i--){
        if(char(ch-i) >= 'A') cout << char(ch-i);
        else cout << char('Z'-('A'-(ch-i))+1);
    }

    cout << ch;

    for(int i=1;i<=3;i++){
        if(char(ch+i) <= 'Z') cout << char(ch+i);
        else cout << char('A'+((ch+i)-'Z')-1);
    }

    return 0;
}