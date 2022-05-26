#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string ID = "qlqlaqkq";
string PW = "tkaruqtkf";
string id,pw;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> id >> pw;
    if(id == ID && pw == PW) cout << "LOGIN";
    else cout << "INVALID";

    return 0;
}