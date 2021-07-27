#include <iostream>
#include <cmath>
using namespace std;

// 숫자 : 1 -> 2~7 -> 8~19 -> 20~37
// 방의 개수 : 1 -> 6 -> 12 -> 18...

int main()
{
    int N, cnt = 1;
    cin >> N;
    
    if(N != 1)
    {
        int h = 2;
        for(int i=1 ; h<=N ; i++)
        {
            cnt ++;
            h += 6*i;
        }  
    }

    cout << cnt ;

    return 0;
}