#include <iostream>
using namespace std;

char arr[3][6] = {
    {'P','O','T','I','O','\0'},
    {'A','B','C','D','E','\0'},
    {'Y','O','U','R','E','\0'}
};

int main(){
    int a,b;
    cin >> a >> b;

    for(int i=0;i<3;i++){
        for(int j=a;j<=b;j++){
            cout << arr[i][j];
        }
    }

    return 0;
}