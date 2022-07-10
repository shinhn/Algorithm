#include <iostream>
#include <string>
#include <vector>
using namespace std;

string email;
vector<string> name;
vector<string> domain;

int pos;

int main(){
    
    cin >> email;

    while(1){
        pos = email.find("@");
        name.push_back(email.substr(0,pos));
        email.erase(0,pos+1);

        pos = email.find(".");
        domain.push_back(email.substr(0,pos));
        email.erase(0,pos+1);

        pos = email.find("|");
        if(pos == string::npos) break;
        email.erase(0,pos+1);
    }
    

    for(int i=0;i<name.size();i++){
        cout << "[#" << name[i] << "] " << domain[i] << "\n";
    }
    

    return 0;
}