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
        if(binary_search(a,a+500001,b[i])) cout << "1 ";
        else cout << "0 ";
    }

    return 0;
}