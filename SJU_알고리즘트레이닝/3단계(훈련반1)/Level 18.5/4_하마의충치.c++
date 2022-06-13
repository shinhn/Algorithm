#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int up[5];
int down[5];
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        cin >> up[i];
    }

    for(int i=0;i<5;i++){
        cin >> down[i];
    }

    for(int i=0;i<5;i++){
        if(up[i] == 1 && down[i] == 1) cnt++;
    }

    cout << cnt << "개";

    return 0;
}