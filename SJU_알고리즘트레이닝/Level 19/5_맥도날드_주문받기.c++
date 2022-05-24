#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

struct MC{
    string burger1;
    string burger2;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    MC bob, tom;

    cin >> bob.burger1;
    cin >> bob.burger2;
    cin >> tom.burger1;
    cin >> tom.burger2;

    cout << "bob.burger1=" << bob.burger1.size() << "\n";
    cout << "bob.burger2=" << bob.burger2.size() << "\n";
    cout << "tom.burger1=" << tom.burger1.size() << "\n";
    cout << "tom.burger2=" << tom.burger2.size() << "\n";

    return 0;
}