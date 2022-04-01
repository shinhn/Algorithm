#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num = 0;
    while(1){
        num ++;
        int L, P, V, cnt = 0;
        cin >> L >> P >> V;

        if(L == 0 && P == 0 && V == 0) break;

        cnt += V / P * L;
        if (V % P < L)
            cnt += V % P;
        else
            cnt += L;
        cout << "Case " << num << ": " << cnt << "\n";
    }

    

    return 0;
}