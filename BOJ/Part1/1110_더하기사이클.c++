#include <iostream>

using namespace std;

int main(){

    int cycle = 0, num, new_num = -1;

    cin >> num;

    

    while(num != new_num){
        cycle ++;

        if (num < 9) num = num * 10;
        if (cycle == 1) new_num = num;

        new_num = (new_num % 10) * 10 + ((new_num % 10) + new_num / 10)%10;
        // cout << new_num << '\n';
    }

    cout << cycle << endl;

    return 0;
}