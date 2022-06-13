#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int arr[3][3] = {{3,5,9},{4,2,1},{5,1,5}};
int input[3];

bool isExist(int num){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(num == arr[i][j]) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> input[i];
    }

    for(int i=0;i<3;i++){
        if(isExist(input[i])) cout << input[i] << ":존재\n";
        else cout << input[i] << ":미발견\n";
    }

    return 0;
}