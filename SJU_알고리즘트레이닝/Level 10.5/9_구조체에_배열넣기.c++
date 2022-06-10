#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct BBQ{
    int x;
    int data[3];
};

int main(){

    BBQ g;
    cin >> g.x;
    for(int i=0;i<3;i++){
        cin >> g.data[i];
    }

    int sum=0;
    for(int i=0;i<3;i++){
        sum += g.data[i];
    }

    cout << sum << " " << g.x;

    return 0;
}