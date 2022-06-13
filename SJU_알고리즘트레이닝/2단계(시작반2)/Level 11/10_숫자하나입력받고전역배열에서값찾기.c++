#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2][5] = {
    {3,2,6,2,4},
    {1,4,2,6,5}
};

int KFC(int target){
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            if(target == arr[i][j]) return 1;
        }
    }

    return 0;
}

int main(){
    int target;
    cin >> target;

    if(KFC(target) == 1) cout << "값이 존재합니다";
    else cout << "값이 없습니다";
    

    return 0;
}