#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int y = 5, x = 5;
int n;
string op;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n--){
        cin >> op;
        if(op == "up"){
            y--;
        }
        if(op == "down"){
            y++;
        }
        if(op == "left"){
            x--;
        }
        if(op == "right"){
            x++;
        }
        if(op == "click"){
            cout << y << "," << x << "\n";
        }
    }


    return 0;
}