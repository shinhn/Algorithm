#include <iostream>

using namespace std;

int main(){

    int H, M, minutes, alert;

    cin >> H >> M;

    minutes = H*60 + M;

    alert = minutes - 45;

    if(alert < 0)alert = 24*60 + alert;

    cout << alert/60 << ' ' << alert%60 << endl;

    return 0;
}