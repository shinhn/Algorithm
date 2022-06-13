#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char town[3][3] = {{'C','D','A'},{'B','M','Z'},{'Q','P','O'}};
char black[4];
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> black[i];

        bool flag = true;
        for(int k=0;k<3;k++){
            for(int j=0;j<3;j++){
                if(black[i] == town[k][j]){
                    cnt++;
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
    }

    cout << cnt << "명";
    

    return 0;
}