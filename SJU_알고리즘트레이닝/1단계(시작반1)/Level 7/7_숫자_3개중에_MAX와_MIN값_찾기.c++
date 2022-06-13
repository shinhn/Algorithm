#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int main(){
    
    for(int i=0;i<3;i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }

    cout << "MAX=" << *max_element(arr.begin(), arr.end()) << "\n";
    cout << "MIN=" << *min_element(arr.begin(), arr.end()) << "\n";

    return 0;
}