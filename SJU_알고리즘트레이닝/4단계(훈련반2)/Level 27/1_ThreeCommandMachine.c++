#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main(){
    
    int n;
    cin >> n;

    while(n--){
        string op;
        cin >> op;

        if(op == "push"){
            int num;
            cin >> num;
            arr.push_back(num);
        }
        if(op == "printLast"){
            cout << arr.back() << "\n";
        }
        if(op == "pop"){
            arr.pop_back();
        }

    }

    return 0;
}