#include <iostream>
using namespace std;

int main()
{
    int N, cnt, num, ans=0;
    cin >> N;

    for(int i=0;i<N;i++)
    {
        cin >> num;
        if(num > 1)
        {
            cnt=1;
            for(int j=2;j<num;j++)
            {
                if(num%j==0)
                {
                    cnt=0;
                    break;
                }
            }
            ans += cnt;
        }
    }

    cout << ans;
}