#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<char> arr;

void func(int depth){
    if(depth == 2){
        for(int i=0;i<arr.size();i++){
            cout << arr[i];
        }
        cout << "\n";
        return;
    }

    for(int i=0;i<3;i++){
        char ch = char(i+'A');
        arr.push_back(ch);
        func(depth+1);
        arr.pop_back();
    }
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    func(0);
    
    return 0;
}