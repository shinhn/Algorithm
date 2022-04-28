#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string input;
char arr[15];
int sum[26], ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> input;
    
    for(int i=0;i<input.size();i++){
        arr[i] = input[i];
    }
    
    for(int i=0;i<11;i++){
        sum[arr[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(sum[i]!=0)ans++;
    }
    
    cout << ans << "개";

    return 0;
}