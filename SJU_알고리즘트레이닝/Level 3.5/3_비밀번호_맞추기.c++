#include <iostream>

using namespace std;

int main(){

    for(int i=1;i<=4;i++){
        int n;
        cin >> n;
        if(n!=i){
            cout << "로그인실패";
            return 0;
        }
    }

    cout << "로그인성공";
    
    return 0;
}