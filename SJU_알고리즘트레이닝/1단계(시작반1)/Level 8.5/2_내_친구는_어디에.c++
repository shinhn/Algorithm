#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[6] = {'D','T','A','B','W','Q'}, fr;

int main(){
    cin >> fr;
    for(int i=0;i<6;i++){
        if(arr[i] == fr){
            cout << i << "번 INDEX";
            break;
        }
    }
    

    return 0;
}