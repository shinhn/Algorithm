#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[3][2][2] = {
    {{2,4},{1,5}},
    {{2,3},{3,6}},
    {{7,3},{1,5}}
};

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    int MAX = arr[n][0][0];
    int MIN = arr[n][0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[n][i][j] > MAX) MAX = arr[n][i][j];
            if(arr[n][i][j] < MIN) MIN = arr[n][i][j];
        }
    }

    cout << "MAX=" << MAX << "\n" << "MIN=" << MIN << "\n";
    
    return 0;
}