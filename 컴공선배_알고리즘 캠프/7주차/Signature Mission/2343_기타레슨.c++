#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M, ans;
vector<int> lec;

int l,r,m;

bool is_possible(){
    
    int sum=0, cnt=1;

    for(int i=0;i<N;i++){
        if(lec[i] > m) return false;
        sum += lec[i];
        if(sum > m){
            cnt ++;
            sum = lec[i];
        }        
    }
    
    if(cnt <= M) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        lec.push_back(tmp);
        r+=tmp;
    }

    while(l <= r){

        m = (l+r)/2;

        if(is_possible()){
            r = m - 1;
            ans = m;
        }
        else{
            l = m + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}