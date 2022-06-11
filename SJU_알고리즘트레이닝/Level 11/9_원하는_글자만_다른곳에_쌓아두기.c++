#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[8];
vector<char> big, small;

int main(){
    
    for(int i=0;i<8;i++){
        cin >> arr[i];
        if(arr[i] >= 'a' && arr[i] <= 'z') small.push_back(arr[i]);
        else big.push_back(arr[i]);
    }

    cout << "big=";
    for(int i=0;i<big.size();i++){
        cout << big[i];
    }
    cout << "\nsmall=";
    for(int i=0;i<small.size();i++){
        cout << small[i];
    }

    return 0;
}