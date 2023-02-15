#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str, a = "AAAA", b = "BB";
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'X'){
            cnt ++;
        }
        else{
            cnt = 0;
        }

        if(cnt == 2){
            str[i-1] = 'B';
            str[i] = 'B';
            cnt = 0;
        }
    }

    cnt = 0;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'B'){
            cnt ++;
        }
        else{
            cnt = 0;
        }

        if(cnt == 4){
            str[i-3] = 'A';
            str[i-2] = 'A';
            str[i-1] = 'A';
            str[i] = 'A';
            cnt = 0;
        }
    }

    if(str.find("X") != string::npos) cout << "-1\n";
    else cout << str << '\n';

    return 0;
}