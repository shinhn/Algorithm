#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str[3], tmp;
int max_idx, max_len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> str[i];
        if(max_len < str[i].length()){
            max_len = str[i].length();
            max_idx = i;
        }
    }

    tmp = str[max_idx];
    str[max_idx] = str[0];
    str[0] = tmp;

    for(int i=0;i<3;i++){
        cout << str[i] << "\n";
    }


    return 0;
}