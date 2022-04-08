#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;
    for(int i=0;i<7;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "MAX=" << *max_element(arr.begin(), arr.end()) << "\n";
    cout << "MIN=" << *min_element(arr.begin(), arr.end()) << "\n";

    return 0;
}