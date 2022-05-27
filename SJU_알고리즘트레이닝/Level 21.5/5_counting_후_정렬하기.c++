#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int vect[8];
int bucket[10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<8;i++){
        cin >> vect[i];
        bucket[vect[i]] ++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<bucket[i];j++){
            cout << i << " ";
        }
    }

    return 0;
}