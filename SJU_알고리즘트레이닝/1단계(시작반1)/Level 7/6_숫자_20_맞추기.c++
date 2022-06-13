#include <iostream>
using namespace std;

int n;

int main(){
    for(int i=0;i<4;i++){
        cin >> n;
        if(n < 20) cout << "더 큰수를 입력하세요\n";
        else if(n > 20) cout << "더 작은수를 입력하세요\n";
        else cout << "정답입니다\n";
    }

    return 0;
}