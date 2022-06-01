#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[8];
int pivot=0, a=1, b=7, tmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<8;i++){
        cin >> arr[i];
    }

    while(1){
        // cout << "before : " << a << " " << b << "\n";

        for(;a<8;a++){
            if(arr[a] > arr[pivot]){
                break;
            }
        }

        for(;b>=0;b--){
            if(arr[b] < arr[pivot]){
                break;
            }
        }

        // cout << "after : " << a << " " << b << "\n";

        if(b < a) break;

        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    tmp = arr[b];
    arr[b] = arr[pivot];
    arr[pivot] = tmp;

    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    }

    return 0;
}