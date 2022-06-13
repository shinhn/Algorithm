#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int vect[3][3] = {{3,7,4},{2,2,4},{2,2,5}};
int target[3];
int cnt,cnt_max,ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> target[i];

        cnt=0;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(vect[j][k] == target[i]) cnt++;
            }
        }
        if(cnt > cnt_max){
            cnt_max = cnt;
            ans = target[i];
        }
    }

    cout << ans << "\n";
    
    return 0;
}