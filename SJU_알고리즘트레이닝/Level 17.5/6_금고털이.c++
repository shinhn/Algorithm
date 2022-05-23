#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int password[4] = {3,7,4,9};
int input[4];

bool isSame(){
    for(int i=0;i<4;i++){
        if(input[i] != password[i]) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> input[i];
    }

    if(isSame()) cout << "pass\n";
    else cout << "fail\n";
    
    return 0;
}