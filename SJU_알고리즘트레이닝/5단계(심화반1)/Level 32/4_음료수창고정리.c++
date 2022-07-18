#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr[5];

int main(){
    
    for(int i=0;i<5;i++){
        string str;
        cin >> str;

        for(int j=0;j<str.length();j++){
            arr[i].push_back(int(str[j]-'0'));
        }
    }

    int l1, l2;
    cin >> l1 >> l2;

    sort(arr[l1].begin(), arr[l1].end());
    sort(arr[l2].begin(), arr[l2].end());

    for(int i=0;i<5;i++){
        cout << arr[i][0] << " ";
    }


    return 0;
}