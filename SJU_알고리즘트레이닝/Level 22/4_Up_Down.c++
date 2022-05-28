#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string op;
int pos=1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        cin >> op;
        if(op == "up"){
            pos++;
            if(pos == 0) pos = 1;
        }
        if(op == "down"){
            pos--;
            if(pos == 0) pos = -1;
        }
    }

    if(pos > 0) cout << pos;
    else cout << "B" << -pos;
    
    return 0;
}