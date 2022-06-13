#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pingpong(int tong){
    return tong + 10;
}

int main(){

    int stone;
    cin >> stone;
    int ret = pingpong(stone);

    cout << ret;

    return 0;
}