#include <iostream>
using namespace std;

int arr[3][3], t=2, n=1;
char ch;

int main(){
    cin >> ch;

    if(ch >= '0' && ch <= '9'){
        for(int i=2;i>=0;i--){
            for(int j=2;j>=t;j--){
                arr[i][j] = n;
                n++;
            }
            t--;
        }
    }
    else{
        for(int i=2;i>=0;i--){
            for(int j=0;j<=t;j++){
                arr[i][j] = n;
                n++;
            }
            t--;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == 0) cout << " ";
            else cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}