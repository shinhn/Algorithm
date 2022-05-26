#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr1[4], arr2[4], result[8];
int idx1, idx2, idx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> arr1[i];
    }

    for(int i=0;i<4;i++){
        cin >> arr2[i];
    }

    while(idx1 < 4 && idx2 < 4){
        if(arr1[idx1] < arr2[idx2]){
            result[idx] = arr1[idx1];
            idx1++;
            idx++;
        }
        else if(arr1[idx1] > arr2[idx2]){
            result[idx] = arr2[idx2];
            idx2++;
            idx++;
        }
        else{
            result[idx] = arr1[idx1];
            idx++;
            idx1++;
            result[idx] = arr2[idx2];
            idx++;
            idx2++;
        }
    }

    while(idx1 < 4){
        result[idx] = arr1[idx1];
        idx++;
        idx1++;
    }

    while(idx2 < 4){
        result[idx] = arr2[idx2];
        idx++;
        idx2++;
    }

    for(int i=0;i<8;i++){
        cout << result[i] << " ";
    }

    return 0;
}