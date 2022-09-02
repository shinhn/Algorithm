#include <iostream>

using namespace std;

int f(int x, int y){
    if(x == 0) return 0;
    return f(x / 3, y * 3) + x % 3 * y;
}

int main(){
    cout << f(215, 5);
}
