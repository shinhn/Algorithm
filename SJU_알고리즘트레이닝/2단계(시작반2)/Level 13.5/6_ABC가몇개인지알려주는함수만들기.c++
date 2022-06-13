#include <iostream>
using namespace std;

void FindABC(string str1, string str2){
    int a=0, b=0, c=0;

    for(int i=0;i<str1.length();i++){
        if(str1[i] == 'A') a++;
        if(str1[i] == 'B') b++;
        if(str1[i] == 'C') c++;
    }

    for(int i=0;i<str2.length();i++){
        if(str2[i] == 'A') a++;
        if(str2[i] == 'B') b++;
        if(str2[i] == 'C') c++;
    }

    cout << "A:" << a << "\n";
    cout << "B:" << b << "\n";
    cout << "C:" << c << "\n";
}

int main(){
    string str1, str2;
    cin >> str1 >> str2;

    FindABC(str1, str2);

    return 0;
}