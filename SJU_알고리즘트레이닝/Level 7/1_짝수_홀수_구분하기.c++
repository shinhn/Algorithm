#include <iostream>
using namespace std;

int a[5] = {3,5,2,4,1};
int b[3][2] = {{9,8},{7,1},{3,4}};
int n;

int main(){
    cin >> n;
    if(n%2 == 1){
        for(int i=0;i<5;i++){
            cout << a[i];
        }
    }
    else{
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cout << b[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}