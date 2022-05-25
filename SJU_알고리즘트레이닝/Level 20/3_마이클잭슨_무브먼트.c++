#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[6];

void print(int idx){
    cout << arr[idx] << " ";
    if(idx == 5)return;
    print(idx+1);
    cout << arr[idx] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    print(0);

    return 0;
}