#include <iostream>
using namespace std;

string str;
int idx[4];
char* ptrs[4];

int main(){
    
    cin >> str;
    for(int i=0;i<4;i++){
        cin >> idx[i];

        ptrs[i] = &str[idx[i]];
    }

    for(int i=0;i<4;i++){
        cout << *ptrs[i];
    }

    return 0;
}