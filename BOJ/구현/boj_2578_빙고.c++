#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int i, j, cnt;
int map[6][6];
bool check[6][6];
int num[26];

bool isBingo(){
    int line = 0;

    // 가로 빙고
    for(i=1;i<=5;i++){
        cnt=0;
        for(j=1;j<=5;j++){
            if(check[i][j]) cnt++;
        }
        if(cnt == 5) line++;
    }

    // 세로 빙고
    for(i=1;i<=5;i++){
        cnt=0;
        for(j=1;j<=5;j++){
            if(check[j][i]) cnt++;
        }
        if(cnt == 5) line++;
    }

    // 오른쪽 아래 대각 빙고
    cnt=0;
    for(i=1,j=1;i<=5;i++,j++){
        if(check[i][j]) cnt++;
    }
    if(cnt == 5) line++;

    // 왼쪽 아래 대각 빙고
    cnt=0;
    for(i=1,j=5;i<=5;i++,j--){
        if(check[i][j]) cnt++;
    }
    if(cnt == 5) line++;

    // 세줄 이상일 경우, 빙고
    if(line >= 3) return true; // 한번에 두줄이 완성될 경우도 있으므로 line == 3 으로 하면 안됨

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin >> map[i][j];
        }
    }

    for(int k=1;k<=25;k++){
        cin >> num[k];
    }

    for(int k=1;k<=25;k++){
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                if(map[i][j] == num[k])check[i][j] = true;
            }
        }

        if(isBingo()) {
            cout << k << '\n';
            return 0;
        }
    }
    
    return 0;
}