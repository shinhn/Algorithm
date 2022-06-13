#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[4][4];

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int num;
            cin >> num;
            if(num % 2 == 0) arr[i][j] = '#';
            else arr[i][j] = '@';
            
            if(num == 0) arr[i][j] = '!';
        }           
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j];
        }   
        cout << "\n";        
    }

    return 0;
}