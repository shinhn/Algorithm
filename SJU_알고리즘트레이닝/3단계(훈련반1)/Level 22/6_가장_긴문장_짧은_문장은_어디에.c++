#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string arr[4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> arr[i];
    }

    string max_str = arr[0];
    string min_str = arr[0];
    int max_idx = 0;
    int min_idx = 0;

    for(int i=1;i<4;i++){
        if(arr[i].length() > max_str.length()){
            max_str = arr[i];
            max_idx = i;
        }

        if(arr[i].length() < min_str.length()){
            min_str = arr[i];
            min_idx = i;
        }
    }

    cout << "긴문장:" << max_idx << "\n" << "짧은문장:" << min_idx << "\n";
    
    return 0;
}