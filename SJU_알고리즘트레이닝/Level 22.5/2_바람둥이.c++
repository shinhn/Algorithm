#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n;
vector<char> arr;

void print(int depth){
    if(depth == n) {
        for(int i=0;i<arr.size();i++){
            cout << arr[i];
        }
        cout << "\n";
        return;
    }

    arr.push_back('x');
    print(depth+1);
    arr.pop_back();

    arr.push_back('o');
    print(depth+1);
    arr.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    print(0);
    
    return 0;
}