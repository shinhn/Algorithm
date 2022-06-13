#include <iostream>

using namespace std;

int main(){

    int n, result=1;
    cin >> n;

    for(int i=1;i<=n;i++){
        cout << result << " ";
        result += 2;
    }
    
    return 0;
}