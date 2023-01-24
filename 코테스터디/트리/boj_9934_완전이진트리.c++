#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int K, cnt;
int node[1024];
vector<int> arr;

void inOrder(int idx){
    if(idx >= pow(2,K)) return;
    if(cnt > arr.size()-1) return;

    inOrder(idx*2);
    node[idx] = arr[cnt];
    cnt++;
    inOrder(idx*2 + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K;

    for(int i=1;i<pow(2,K);i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    inOrder(1);

    for(int i=0;i<K;i++){
        for(int j=pow(2,i);j<pow(2,i+1);j++){
            cout << node[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}