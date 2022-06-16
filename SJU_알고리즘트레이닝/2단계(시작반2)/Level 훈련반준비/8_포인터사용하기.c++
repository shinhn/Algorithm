#include <iostream>
using namespace std;

char a,b,c;
char *pa=&a, *pb=&b, *pc=&c;

int main(){
    cin >> a >> b >> c;
    if(*pa <= *pc && *pb <= *pc) cout << *pc;
    else if(*pa <= *pb && *pc <= *pb) cout << *pb;
    else if(*pc <= *pa && *pb <= *pa) cout << *pa;

    return 0;
}