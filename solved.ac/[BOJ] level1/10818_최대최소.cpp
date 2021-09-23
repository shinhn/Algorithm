#include <iostream>
using namespace std;

int main()
{
    int n, max, min;
    cin >> n;
    cin >> max;
    min = max;

    for(int i=0 ; i<n-1 ; i++)
    {
        int num;
        cin >> num;

        if(num > max)max = num;
        if(num < min)min = num;
    }

    cout << min << ' ' << max;
}