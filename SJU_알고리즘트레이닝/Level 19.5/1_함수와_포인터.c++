#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void BBQ(int* a, int* b){
    vector<int> num(5);
    for(int i=0;i<5;i++){
        cin >> num[i];
    }

    *a = *max_element(num.begin(), num.end());
    *b = *min_element(num.begin(), num.end());

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    BBQ(&a, &b);

    cout << "a=" << a << "\n";
    cout << "b=" << b << "\n";

    return 0;
}