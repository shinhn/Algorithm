#include <iostream>
#include <algorithm>
using namespace std;

char arr[2][6] = {
    {'D','A','T','A','W','\0'},
    {'B','B','Q','K','\0','\0'}
};

int main(){
    int n;
    cin >> n;
    if(n%2==1){
        sort(&arr[0][0], &arr[0][5]);
    }
    else{
        sort(&arr[1][0], &arr[1][4]);
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(arr[i][j] == '\0') break;
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}