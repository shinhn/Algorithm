#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


// Bottm Up
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
    
//     int block[n];
//     block[0] = 1;
//     block[1] = 2;
    
//     for(int i = 2; i<n ; i++){
//         block[i] = (block[i - 1] + block[i - 2]) % 10007;
//     }
    
//     cout << block[n-1] << "\n";

//     return 0;
// }

// Top Down

int n;
int block[1001];

int cal(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    
    if(block[n] != 0) return block[n]; // 이미 센것은 넘어감 (메모이제이션)
    
    block[n] = (cal(n-1) + cal(n-2)) % 10007; // 메모이제이션
    return block[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> n;
 
    block[0] = 1;
    block[1] = 2;

    cal(n-1);

    cout << block[n-1] << "\n";

    return 0;
}