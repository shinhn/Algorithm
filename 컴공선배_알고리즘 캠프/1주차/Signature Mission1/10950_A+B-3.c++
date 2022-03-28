#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        cout << a+b << "\n";

    }

    return 0;
}