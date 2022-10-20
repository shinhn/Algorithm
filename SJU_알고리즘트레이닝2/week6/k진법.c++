#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<int> ans;

void func(int num, int div){
    if(num / div == 0) {
        ans.push_back(num);
        return;
    }
    ans.push_back(num%div);
    func(num/div, div);
}

int main(){

    cin >> n >> k;

    func(n, k);

    reverse(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }

    return 0;
}