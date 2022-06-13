#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<int, int> cnt;

int arr[3][5] = {
    {1,3,3,5,1},
    {3,6,2,4,2},
    {1,9,2,6,5}
};

int N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            int num = arr[i][j];
            cnt[num] ++;
        }
    }

    cin >> N;

    for(auto i:cnt){
        if(i.second == N) cout << i.first << " ";
    }

    return 0;
}