#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][4];

int main(){

    int num=1;
    for(int i=2;i>=0;i--){
        for(int j=3;j>=0;j--){
            arr[i][j] = num;
            num++;
        }           
    }

    int row;
    cin >> row;
    for(int i=0;i<3;i++){
        arr[i][row] = 0;        
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }           
        cout << "\n";
    }

    return 0;
}