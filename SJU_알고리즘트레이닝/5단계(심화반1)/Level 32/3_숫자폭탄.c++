#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

int main(){
    
    cin >> N;

    int arr[N];
    vector<int> ans;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    for(int i=0;i<N-2;i++){
        if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
            i+=2;
            continue;
        }
        ans.push_back(arr[i]);
    }

    ans.push_back(arr[N-2]);
    ans.push_back(arr[N-1]);

    sort(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }


    return 0;
}