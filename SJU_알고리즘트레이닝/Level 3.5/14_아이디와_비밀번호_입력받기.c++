#include <iostream>

using namespace std;

int main(){

    int id, pw; 
    cin >> id >> pw;

    if(id == 1111 && pw == 2222) cout << "로그인성공";
    if(id != 1111 && pw == 2222) cout << "아이디가 틀렸습니다";
    if(id == 1111 && pw != 2222) cout << "비밀번호가 틀렸습니다";
    
    return 0;
}