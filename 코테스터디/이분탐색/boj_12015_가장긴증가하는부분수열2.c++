#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, ans=1;
int arr[1000001];
vector<int> permutation;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    permutation.push_back(arr[0]);
    for(int i=1;i<N;i++){
        if(arr[i] > permutation.back()){
            permutation.push_back(arr[i]);
        }
        else{
            // arr[i] 보다 크나 같은 값이 처음으로 나타나는 위치에 넣음 (대치)
            int idx = lower_bound(permutation.begin(), permutation.end(), arr[i]) - permutation.begin();
            permutation[idx] = arr[i];
        }
    }

    cout << permutation.size() << "\n";
    
    return 0;
}