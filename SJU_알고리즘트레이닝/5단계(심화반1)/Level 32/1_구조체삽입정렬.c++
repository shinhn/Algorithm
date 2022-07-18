#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int n;
    char ch;
};

bool cmp(node n1, node n2){
    if(n1.n < n2.n) return true;
    else if(n1.n > n2.n) return false;
    else{
        return n1.ch < n2.ch;
    }
}

int main(){
    
    int N;
    cin >> N;

    node arr[N];

    for(int i=0;i<N;i++){
        cin >> arr[i].n >> arr[i].ch;
    }

    sort(arr, arr+N, cmp);

    for(int i=0;i<N;i++){ 
        cout << arr[i].n << " " << arr[i].ch << "\n";
    }

    return 0;
}