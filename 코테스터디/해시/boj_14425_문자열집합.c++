#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int N, M, ans;
map<string, int> dict;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=0;i<N;i++){
        string str;
        cin >> str;
        dict[str] = 1;
    }

    for(int i=0;i<M;i++){
        string str;
        cin >> str;
        if(dict.find(str) != dict.end()) ans ++;
    }

    cout << ans << "\n";


    return 0;
}