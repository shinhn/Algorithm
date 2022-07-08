#include <iostream>
#include <string>
using namespace std;

string str;
int p, f;
int cnt;

int main(){
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] + ('A'-'a');
        }
    }

    size_t found1 = str.find("PASS");
    if(found1 != string::npos) p++;

    while(found1 != string::npos){
        found1 = str.find("PASS",found1+1,4);
        if(found1 != string::npos) p++;
    }

    size_t found2 = str.find("FAIL");
    if(found2 != string::npos) f++;

    while(found2 != string::npos){
        found2 = str.find("FAIL",found2+1,4);
        if(found2 != string::npos) f++;
    }

    cout << int( double(p)/(double(p) + double(f))*100 ) << "%\n";

    return 0;
}