#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int N;
map<string, int> file;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        string str;
        cin >> str;
        int idx = str.find(".");
        string key = str.substr(idx+1, str.size());
        
        file[key] ++;
    }

    for(auto i : file){
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}