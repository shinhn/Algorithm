#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string input;

string arr[5] = {
    "Jason",
    "Dr.tom",
    "EXEXI",
    "GK12P",
    "POW"
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    for(int i=0;i<5;i++){
        if(arr[i] == input){
            cout << "암호해제\n";
            return 0;
        }
    }

    cout << "암호틀림\n";
    
    return 0;
}