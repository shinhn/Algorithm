#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int num;
    char ch;
};

bool cmp1(Node n1, Node n2){
    return n1.num < n2.num;
}

bool cmp2(Node n1, Node n2){
    return n1.num > n2.num;
}

bool cmp3(Node n1, Node n2){
    // 1. 짝수 우선
    if(n1.num % 2 == 0 && n2.num % 2 == 1) return true;
    else if(n1.num % 2 == 1 && n2.num % 2 == 0) return false;
    else{
        // 2. 숫자 오름차순
        if(n1.num != n2.num){
            return n1.num < n2.num;
        }
        else{ // 3. 문자 오름차순
            return n1.ch < n2.ch;
        }
    }
}

int main(){

    int N;
    cin >> N;

    Node arr[N];

    for(int i=0;i<N;i++) {
        cin >> arr[i].num;
    }

    for(int i=0;i<N;i++) {
        cin >> arr[i].ch;
    }

    // Type 1
    sort(arr, arr+N, cmp1);

    for(int i=0;i<N;i++) {
        cout << arr[i].num << " ";
    }
    cout << "\n";

    // Type 2
    sort(arr, arr+N, cmp2);

    for(int i=0;i<N;i++) {
        cout << arr[i].num << " ";
    }
    cout << "\n";

    // Type 3
    sort(arr, arr+N, cmp3);

    for(int i=0;i<N;i++) {
        cout << arr[i].num << " ";
    }
    cout << "\n";
    for(int i=0;i<N;i++) {
        cout << arr[i].ch << " ";
    }
    cout << "\n";

    return 0;
}