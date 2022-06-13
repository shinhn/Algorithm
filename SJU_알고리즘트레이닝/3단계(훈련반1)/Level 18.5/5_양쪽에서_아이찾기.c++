#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str = "ATKPTCABC";
char ch1, ch2;
int idx1, idx2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch1 >> ch2;

    for(int i=0;i<str.size();i++){
        if(ch1 == str[i]){
            idx1 = i;
            break;
        }
    }

    for(int i=str.size()-1;i>=0;i--){
        if(ch2 == str[i]){
            idx2 = i;
            break;
        }
    }

    cout << idx2 - idx1;

    return 0;
}