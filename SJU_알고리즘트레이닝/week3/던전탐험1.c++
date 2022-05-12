#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void go(int dir, int depth){
    if(depth==2){
        cout << "보물 발견!\n";
        return ;
    }
    go(0,depth+1);
    go(1,depth+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    go(0,1);
    go(1,1);

    return 0;
}