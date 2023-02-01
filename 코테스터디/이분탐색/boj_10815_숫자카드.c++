#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int a[500001], b[500001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    sort(a, a+500001);

    cin >> M;
    for(int i=0;i<M;i++){
        cin >> b[i];
    }

    for(int i=0;i<M;i++){
        int low = 0, high = N-1, ans = 0;
        while(low <= high){
            int mid = (low + high)/2;
            if(b[i] > a[mid]){
                low = mid + 1;
            }
            else if(b[i] < a[mid]){
                high = mid - 1;
            }
            else{
                ans = 1;
                break;
            }
        }

        cout << ans << " ";
    }
    

    return 0;
}