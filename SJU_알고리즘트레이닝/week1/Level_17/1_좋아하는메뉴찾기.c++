#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char arr[4] = {'M', 'T', 'K', 'C'};
char ch;

bool isExist(){
    for(int i=0;i<4;i++){
        if(arr[i]==ch)return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ch;

    if (isExist()==true) cout << "발견\n";
    else
        cout << "미발견\n";

    return 0;
}