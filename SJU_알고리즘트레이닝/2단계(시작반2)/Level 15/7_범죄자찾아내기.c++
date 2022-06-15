#include <iostream>
using namespace std;

char people[7] = {'A','B','C','Z','E','T','Q'};
string terror;
int flag;

int main(){
    cin >> terror;

    for(int i=0;i<terror.length();i++){
        flag = 0;
        for(int j=0;j<7;j++){
            if(terror[i] == people[j])flag=1;
        }
        if(flag==1) cout << terror[i] << "=마을사람\n";
        else cout << terror[i] << "=외부사람\n";
    }

    return 0;
}