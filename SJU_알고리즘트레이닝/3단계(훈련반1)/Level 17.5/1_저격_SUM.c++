#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int arr[11] = {3,4,1,1,2,6,8,7,8,9,10};
int idx;

int getSum(int index){
    int sum=0;
    
    for(int i=index;i<index+5;i++){
        sum+= arr[i];
    }
    
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> idx;
    cout << getSum(idx) << "\n";
    
    return 0;
}