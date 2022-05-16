#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int T, cnt;
int x, y, r1, x2, y2, r2;

int main()
{
    cin >> T;
    while(T--){
        cin >> x >> y >> r1 >> x2 >> y2 >> r2;

        double d = sqrt((x-x2)*(x-x2) + (y-y2)*(y-y2));

        if(d==0){
            if(r1 == r2) cout << "-1" << "\n";
            else cout << "0" << "\n";
        }
        else{
            if(d == r1+r2 || d == abs(r1-r2)) cout << "1" << "\n";
            else if(abs(r1-r2) < d && d < (r1+r2)) cout << "2" << "\n";
            else{
                cout << "0" << "\n";
            }
        }
    }
}