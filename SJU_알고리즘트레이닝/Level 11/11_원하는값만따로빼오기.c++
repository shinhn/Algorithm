#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[4][4] = {
    {1,3,6,2},
    {4,2,4,5},
    {6,3,7,3},
    {1,5,4,6}
};

vector<int> s;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(n < arr[i][j]) s.push_back(arr[i][j]);
        }
    }

    for(int i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    

    return 0;
}