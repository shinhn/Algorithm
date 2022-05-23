#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int train[] = {3, 7, 6, 4, 2, 9, 1, 7};
int team[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> team[i];
    }

    for(int i=0;i<8;i++){
        int cnt = 0;
        for(int j=0;j<3;j++){
            if(train[i+j] == team[j]) cnt++;
        }
        if(cnt == 3){
            cout << i << "번~" << i+2 << "번 칸\n";
            return 0;
        }
    }
    

    return 0;
}