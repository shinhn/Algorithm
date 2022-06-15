#include <iostream>
using namespace std;

char arr[3][3], ch;

int main(){
    cin >> ch;

    int i=2,t=0;
    while(i>=0){
        int j=0;
        while(j<=t){
            arr[i][j] = char(ch);
            j++;
            ch++;
        }
        t++;
        i--;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]) cout << arr[i][j];
            else cout << " ";
        }
        cout << "\n";
    }
    

    return 0;
}