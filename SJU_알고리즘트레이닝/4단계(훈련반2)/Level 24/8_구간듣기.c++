#include <iostream>
#include <string>
using namespace std;

string pop, part;
int a,b,c;

int main(){
    
    cin >> pop;
    cin >> a >> b >> c;

    for(int i=a;i<=b;i++){
        part += pop[i];
    }

    for(int i=0;i<c;i++){
        cout << part;
    }


    return 0;
}