#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, K;
int arr[100002];
int pSum[100002];
vector<int> temp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
        
        pSum[i] = pSum[i-1] + arr[i];
    }

    for(int i=1;i<=N-(K-1);i++){
        temp.push_back(pSum[i+K-1]-pSum[i-1]);
    }

    cout << *max_element(temp.begin(), temp.end()) << "\n";


    return 0;
}