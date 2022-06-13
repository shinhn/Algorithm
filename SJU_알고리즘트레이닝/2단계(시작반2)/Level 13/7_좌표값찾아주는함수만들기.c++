#include <iostream>
using namespace std;

char arr[3][3] = {
    {'A','D','F'},
    {'Q','W','E'},
    {'Z','X','C'}
};

void find(char *ch){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == *ch){
                cout << i << "," << j;
                return;
            }
        }
    }
}

int main(){
    char ch;
    cin >> ch;

    find(&ch);


    return 0;
}