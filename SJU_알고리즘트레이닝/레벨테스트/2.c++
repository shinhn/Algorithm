#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int type, N, cnt[10];
    fill(cnt, cnt+10, 0);
    cin >> type >> N;

    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        if(num == 1) cnt[1]++;
        if(num == 2) cnt[2]++;
        if(num == 3) cnt[3]++;
        if(num == 4) cnt[4]++;
        if(num == 5) cnt[5]++;
        if(num == 6) cnt[6]++;
        if(num == 7) cnt[7]++;
        if(num == 8) cnt[8]++;
        if(num == 9) cnt[9]++;
    }

    if(type == 1){
        for (int i = 1; i <= 9; i++){
            cout << i << ":" << cnt[i] << "개\n";
        }
    }
    else{
        bool check = true;
        for (int i = 1; i <= 9; i++)
        {
            if(cnt[i] >= 2) check = false;
        }
        if(check == true) cout << "중복없음\n";
        else
            cout << "중복발견\n";
    }

    return 0;
}