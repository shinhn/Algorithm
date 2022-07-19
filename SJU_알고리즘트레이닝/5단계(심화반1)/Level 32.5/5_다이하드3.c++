#include <iostream>
using namespace std;

int arr[2][7] = {
    {3,2,1,3,2,-1,1}, // -1 : 테러범
    {1,1,0,1,0,-1,0} // 0 : 왼쪽, 1 : 오른쪽
};

void find(int i){
    if(arr[0][i] == -1) {
        cout << i << "번\n";
        return;
    }

    if(arr[1][i] == 0) find(i-arr[0][i]);
    else find(i+arr[0][i]);

    cout << i << "번\n";

}

int main(){

    int idx;
    cin >> idx;

    find(idx);

    return 0;
}