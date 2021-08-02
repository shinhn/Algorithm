#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        char num;
        cin >> num;

        sum += num-'0';
    }

    cout << sum;
}

// int 입력 자릿수 제한이 있음
