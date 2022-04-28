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

    int arr[8] = {5,9,4,6,1,5,8,9};
    
    int offset=0, index, target;
    cin >> index >> target;
    
    for(int i=index;i<8;i++){
        if(arr[i] == target) break;
        offset++;
    }
    
    cout << offset << "\n";

    return 0;
}