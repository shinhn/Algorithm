#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][3] = {{3,4,1},{2,1,4},{3,3,0}};
int a, b;

int main(){
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2==1) a++;
            else b++;
        }
    }

    cout << "짝수 : " << b << "\n";
    cout << "홀수 : " << a << "\n";

    return 0;
}