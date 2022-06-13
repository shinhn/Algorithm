#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

char vect[6] = {'B','T','K','I','G','Z'};
char target[4];
int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> target[i];
        for(int j=0;j<6;j++){
            if(vect[j] == target[i]) sum++;
        }
    }

    cout << sum << "\n";
    
    return 0;
}