#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(3);
    cout << fixed;

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        double avg =0;
        for(int j=0;j<m;j++){
            int score;
            cin >> score;
            avg += score;
        }
        avg = avg / m;
        cout << avg << "%"
             << "\n";
    }

    return 0;
}