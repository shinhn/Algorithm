#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    map<string, int> book;

    cin >> n;
    while(n--){
        string str;
        cin >> str;
        book[str] ++;
    }

    int max_cnt=0;
    for(auto i:book){
        max_cnt = max(max_cnt, i.second);
    }
    for (auto i : book){
        if (max_cnt == i.second){
            cout << i.first << "\n";
            break;
        }
    }

    return 0;
}