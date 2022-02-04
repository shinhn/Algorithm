#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum=0;
    cin >> N;
    
    string num;
    cin >> num;

    for (int i = 0; i < N; i++)
    {
        sum += (int)num[i] - ('0');
    }

   cout << sum;

}