#include <iostream>
using namespace std;

struct NODE{
    int x,y;
};

int main(){
    NODE ta, tb;
    cin >> ta.x >> tb.x;

    ta.y = ta.x + 5;
    tb.y = tb.x - 5;

    cout << "ta.x=" << ta.x << "\n";
    cout << "ta.y=" << ta.y << "\n";
    cout << "tb.x=" << tb.x << "\n";
    cout << "tb.y=" << tb.y << "\n";

    return 0;
}