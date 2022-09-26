#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int N, ans;
vector<int> arr1, arr2;

int main(){

    cin >> N;

    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        arr1.push_back(num);
    }

    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        arr2.push_back(num);
    }

    for(int i=0;i<N;i++){
        ans = ans + abs(arr1[i]) + abs(arr2[i]);
    }

    cout << ans;


    return 0;
}
