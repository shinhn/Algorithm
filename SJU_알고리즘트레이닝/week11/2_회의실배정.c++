#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){

    int N;
    cin >> N;

    pair<int, int> arr[N];

    for(int i=0;i<N;i++){
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr+6, cmp);

    int before_end = arr[0].second;
    int cnt = 1;
    for(int i=1;i<N;i++){
        if(before_end <= arr[i].first){
            cnt ++;
            before_end = arr[i].second;
        }
    }

    cout << cnt;



    return 0;
}