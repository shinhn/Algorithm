#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    double low = 0, high = sqrt(n);
    while(low <= high){
        double mid = (low + high)/2;
        if(mid < sqrt(n)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    double div = 0.0;
    //cout << modf(low, &div) << "\n";

    if(modf(low, &div) > 0) cout << int(low) + 1 << "\n";
    else cout << low << "\n";
    

    return 0;
}