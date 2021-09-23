#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for (int i=1;i<num;i++)
    {
        int n = i;
        int sum = i;

        while(n>0)
        {
            sum += n%10;
            n = n/10;
        }

        if (sum == num)
        {
            cout << i;
            return 0;
        }
    }

    cout << "0";

    return 0;

}