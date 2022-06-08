#include <iostream>
using namespace std;

char arr[4] = {'B','T','K','A'};
int n;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}