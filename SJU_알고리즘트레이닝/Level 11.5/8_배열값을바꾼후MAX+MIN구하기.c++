#include <iostream>

using namespace std;

int arr[3][3] = {
    {3,1,6},
    {7,8,4},
    {9,2,3}
};

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    arr[a][b] = c;

    int MAX=arr[0][0], MIN=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(MAX < arr[i][j]) MAX = arr[i][j];
            if(MIN > arr[i][j]) MIN = arr[i][j];
        }
    }

    cout << MAX + MIN;


    return 0;
}