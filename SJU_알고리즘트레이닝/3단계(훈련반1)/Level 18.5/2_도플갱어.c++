#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int num[6];

map<int, int> cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<6;i++){
        cin >> num[i];
        cnt[num[i]] ++;
    }

    for(auto i:cnt){
        if(i.second >= 2) {
            cout << "도플갱어 발견\n";
            return 0;
        }
    }

    cout << "미발견\n";
    

    return 0;
}