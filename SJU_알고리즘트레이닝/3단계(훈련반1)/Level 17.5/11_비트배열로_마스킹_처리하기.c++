#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int arr[4] = {3,5,4,2};
int mask[4];
int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> mask[i];

        if(mask[i] == 1) sum += arr[i];
    }

    cout << sum << "\n";
    
    return 0;
}