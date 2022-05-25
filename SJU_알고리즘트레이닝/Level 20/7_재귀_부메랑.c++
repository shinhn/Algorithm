#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int idx;
int arr[8] = {3,7,4,1,9,4,6,2};

void print(int idx){
    if(idx == 0){
        cout << arr[idx] << " ";
        return;
    }

    cout << arr[idx] << " ";
    print(idx-1);
    cout << arr[idx] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> idx;
    print(idx);

    return 0;
}