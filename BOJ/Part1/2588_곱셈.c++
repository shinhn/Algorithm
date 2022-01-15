#include <iostream>

using namespace std;

int main(){

    int num1, num2, ans1, ans2, ans3, ans;

    cin >> num1 >> num2;

    ans1 = num1 * (num2 % 10);
    ans2 = num1 * ((num2 / 10) % 10);
    ans3 = num1 * ((num2 / 100) % 10);

    ans = num1 * num2;

    cout << ans1 << '\n'
         << ans2 << '\n'
         << ans3 << '\n'
         << ans << endl;

    return 0;
}