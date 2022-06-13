#include <iostream>
#include <vector>
using namespace std;

char arr[9] = {'D','A','T','A','P','O','W','E','R'};
int a,b;
vector<char> vec;

int main(){
    cin >> a >> b;
    
    for(int i=a;i<=b;i++){
        vec.push_back(arr[i]);
    }

    for(int i=0;i<vec.size();i++){
        cout << vec[i];
    }

    return 0;
}