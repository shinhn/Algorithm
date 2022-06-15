#include <iostream>
#include <vector>
using namespace std;

string str[2];
vector<char> ch;

int main(){
    cin >> str[0];
    cin >> str[1];

    for(int i=0;i<str[0].length();i++){
        ch.push_back(str[0][i]);
    }

    for(int i=0;i<str[1].length();i++){
        ch.push_back(str[1][i]);
    }

    for(int i=0;i<ch.size();i++){
        cout << ch[i];
    }

    return 0;
}