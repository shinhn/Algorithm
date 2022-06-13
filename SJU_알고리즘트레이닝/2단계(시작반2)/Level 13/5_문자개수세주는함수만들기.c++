#include <iostream>
using namespace std;

void KFC(int *l, int *s){
    string str;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z') *s = *s+1;
        else *l = *l+1;
    }
}

int main(){
    int l=0,s=0;
    KFC(&l, &s);

    cout << "대문자" << l << "개\n";
    cout << "소문자" << s << "개\n";

    return 0;
}