#include <iostream>
using namespace std;

int stringLen(string *str){
    return str->length();
}

int main(){
    string str;
    cin >> str;

    cout << stringLen(&str) << "글자";

    return 0;
}