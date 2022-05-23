#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string vect = "MINCODING";

bool isExist(char ch){
    for(int j=0;j<vect.size();j++){
        if(ch == vect[j]){
            return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

        if(isExist(arr[i])) cout << "O";
        else cout << "X";
    }

    return 0;
}