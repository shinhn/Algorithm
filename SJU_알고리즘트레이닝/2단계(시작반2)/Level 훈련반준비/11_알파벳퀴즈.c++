#include <iostream>
using namespace std;

char arr[6] = {'A','P','P','L','E','T'}, arr2[5];
int cnt;

int main(){
    for(int i=0;i<5;i++){
        cin >> arr2[i];
        for(int j=0;j<6;j++){
            if(arr[j] == arr2[i])cnt++;
        }
        
    }
    
    cout << cnt << "개 맞추었습니다";


    return 0;
}