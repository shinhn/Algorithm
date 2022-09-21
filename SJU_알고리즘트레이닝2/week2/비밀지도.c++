// https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> arr1, arr2;
vector<string> ans;

int main(){

    cin >> n;

    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr1.push_back(t);
    }

    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr2.push_back(t);
    }

    for(int i=0;i<n;i++){
        int num = arr1[i] | arr2[i];
        string result = "";

        for(int j=0;j<n;j++){
            if(num%2 == 0) result += " ";
            else result += "#";

            num = num >> 1;
        }

        reverse(result.begin(), result.end());

        ans.push_back(result);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << "\n";
    }

    return 0;
}