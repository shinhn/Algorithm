#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int mask[6] = {1,0,1,0,1,0};
vector<int> arr;
int idx, min_el;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<6;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    min_el = *max_element(arr.begin(), arr.end());

    for(int i=0;i<6;i++){
        if(mask[i] == 0) continue;

        if(arr[i] < min_el){
            min_el = arr[i];
            idx = i;
        }
    }

    cout << "arr[" << idx << "]=" << min_el << "\n";
    
    return 0;
}