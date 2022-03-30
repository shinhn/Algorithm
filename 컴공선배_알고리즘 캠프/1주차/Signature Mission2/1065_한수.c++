#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool fun(int x){ // 한수 판별
    int l, m, r; // 3가지 자리수
    l = x/100;
    m = x/10%10;
    r = x%10;

    if(2*m == l+r)
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt;
    cin >> N;

    if(N>=100){
        cnt = 99;
        for (int i = 100; i <= N; i++)
        {
            if (fun(i) == true)
                cnt++;
        }
    }
    else cnt = N;
    

    cout << cnt << "\n";

    return 0;
}