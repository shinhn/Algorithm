#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int T, n, cnt;

void func(int num){
    if(num > n) return;

    if(num == n){
        cnt ++;
        return;
    }

    func(num+1);
    func(num+2);
    func(num+3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T--){
        cin >> n;
        cnt = 0;
        func(0);
        cout << cnt << '\n';
    }
    
    return 0;
}