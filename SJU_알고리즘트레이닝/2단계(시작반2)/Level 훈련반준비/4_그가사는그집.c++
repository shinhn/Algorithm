#include <iostream>
using namespace std;

int juso[8] = {402,401,302,301,202,201,102,101};

char name[8][5] = {
    {'K','I','M','\0','\0'},
    {'T','E','A','\0','\0'},
    {'S','O','M','\0','\0'},
    {'O','P','P','O','\0'},
    {'T','O','M','\0','\0'},
    {'G','D','K','\0','\0'},
    {'J','A','M','E','\0'},
    {'M','I','N','\0','\0'}
};

int main(){
    int n,j;
    cin >> n;
    for(int i=0;i<8;i++){
        if(juso[i] == n) {
            j=i;
            break;
        }
    }

    for(int i=0;i<5;i++){
        if(name[j][i]=='\0')break;
        cout << name[j][i];
    }

    return 0;
}