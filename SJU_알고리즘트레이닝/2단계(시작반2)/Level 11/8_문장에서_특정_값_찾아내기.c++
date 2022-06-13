#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[13] = {'S','t','r','u','c','t','P','o','i','n','t','e','r'};

int main(){
    
    char ch;
    cin >> ch;

    for(int i=0;i<13;i++){
        if(ch == arr[i]){
            cout << "발견";
            return 0;
        }
    }

    cout << "미발견";

    return 0;
}