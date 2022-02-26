#include <iostream>

using namespace std;

int zeros[41] = {1,0,}; // 0호출 횟수
int ones[41] = {0,1,}; // 1호출 횟수

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int i=2;i<=40;i++){
        zeros[i] = zeros[i-1] + zeros[i-2];
        ones[i] = ones[i-1] + ones[i-2];
    }

    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;

        cout << zeros[n] << " " << ones[n] << "\n";
    }

    return 0;
}