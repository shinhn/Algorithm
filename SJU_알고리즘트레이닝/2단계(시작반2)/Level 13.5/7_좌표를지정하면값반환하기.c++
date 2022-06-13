#include <iostream>
using namespace std;

char arr[3][3] = {
    {'D','A','S'},
    {'Q','W','V'},
    {'R','T','Y'}
};

char Find(int y, int x){
    return arr[y][x];
}

int main(){
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;

    cout << Find(y1, x1) << " ";
    cout << Find(y2, x2);

    return 0;
}