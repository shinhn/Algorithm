#include <iostream>
using namespace std;

struct FileDown{
    int a;
    int b;
};

int cnt;

int main(){
    FileDown dn;

    cin >> dn.a >> dn.b;

    while(1){
        if(dn.a >= 100 && dn.b >= 100) break;
        cnt++;
        dn.a ++;
        dn.b ++;
    }

    cout << cnt;

    return 0;
}