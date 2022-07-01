#include <iostream>
#include <string>
using namespace std;

string input[5];
int cnt;

int main(){
    for(int i=0;i<5;i++){
        cin >> input[i];

        size_t found = input[i].find("MCD");
        if(found != string::npos) cnt++;

        while(found != string::npos){
            found = input[i].find("MCD",found+1,3);
            if(found != string::npos) cnt++;
        }
    }

    cout << cnt;

    return 0;
}