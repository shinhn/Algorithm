#include <iostream>
using namespace std;

int arr[4][4] = {
    {3,4,1,6},
    {3,5,3,6},
    {0,0,0,0},
    {5,4,6,0}
};

int MAX=arr[0][0], MAX_y, MAX_x;
int MIN=arr[0][0], MIN_y, MIN_x;

int main(){
    for(int i=0;i<4;i++){
        cin >> arr[2][i];
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] > MAX){
                MAX = arr[i][j];
                MAX_y = i;
                MAX_x = j;
            }
            if(arr[i][j] < MIN){
                MIN = arr[i][j];
                MIN_y = i;
                MIN_x = j;
            }
        }
    }

    cout << "MAX=" << MAX << "(" << MAX_y << "," << MAX_x << ")\n";
    cout << "MIN=" << MIN << "(" << MIN_y << "," << MIN_x << ")\n";

    return 0;
}