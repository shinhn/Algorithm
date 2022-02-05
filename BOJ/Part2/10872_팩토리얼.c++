#include <iostream>

using namespace std;

int factorial(int N){
    if(N<=1) return 1;
    else return N * factorial(N-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    cout << factorial(N);

    return 0;
}