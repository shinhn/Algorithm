#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;
    cin >> N;

    while(1){
        if(N%5 == 0){
            sum += N/5;
            break;
        }

        N-=3;
        sum++;

        if(N<0){
            sum = -1;
            break;
        }

        if(N==0){
            break; 
        }
    }

    cout << sum << "\n";

    return 0;
}