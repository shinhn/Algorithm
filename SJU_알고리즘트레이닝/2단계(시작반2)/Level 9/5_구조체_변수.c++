#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ABC{
    int x,y;
};

int main(){

    ABC t;
    cin >> t.x >> t.y;
    cout << t.x + t.y;

    return 0;
}