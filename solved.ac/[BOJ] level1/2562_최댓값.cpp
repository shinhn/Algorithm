#include <iostream>
using namespace std;

int main()
{
    int n1, max, n; // max: 최댓값, n: 최댓값의 몇 번쨰 수인지
    cin >> n1;

    max = n1;
    n = 1;

    for(int i=2 ; i<=9 ; i++)
    {
        int n2;
        cin >> n2;
        
        if (max < n2)
        {
            max = n2;
            n = i;
        }
    }

    cout << max << '\n' << n << '\n';
}