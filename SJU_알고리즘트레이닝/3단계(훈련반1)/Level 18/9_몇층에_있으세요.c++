#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int apt[5][3] = {
    {15, 18, 17},
    {4, 6, 9},
    {10, 1, 3},
    {7, 8, 9}, 
    {15, 2, 6}
};

int family[3];

int isPattern(int y) {
    // y층에 family 세대가 일치하면 1, 아니면 0을 반환
    int cnt=0;
    for(int i=0;i<3;i++){
        if(apt[y][i] == family[i]) cnt++;
    }
    if(cnt == 3) return 1;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        cin >> family[i];
    }

    for(int i=0;i<5;i++){
        if(isPattern(i)){
            cout << 5-i << "층\n";
            return 0;
        }
    }
    

    return 0;
}