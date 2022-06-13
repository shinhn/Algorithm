#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string name1, name2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> name1 >> name2;

    if(name1 == name2) cout << "동명\n";
    else cout << "남남\n";
    
    return 0;
}