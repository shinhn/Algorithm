#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[5] = {3,5,1,9,7};
int tmp[5];
char op;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> op;
        if(op == 'R'){
            char ch_tmp = arr[4];
            for(int j=0;j<4;j++){
                tmp[j+1] = arr[j];
            }
            for(int j=1;j<5;j++){
                arr[j] = tmp[j];
            }
            arr[0] = ch_tmp;
        }
        if(op == 'L'){
            char ch_tmp = arr[0];
            for(int j=0;j<4;j++){
                tmp[j] = arr[j+1];
            }
            for(int j=0;j<4;j++){
                arr[j] = tmp[j];
            }
            arr[4] = ch_tmp;
        }
    }

    for(int j=0;j<5;j++){
        cout << arr[j] << " ";
    }

    return 0;
}