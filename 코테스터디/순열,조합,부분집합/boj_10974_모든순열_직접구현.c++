#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;
int arr[9];
bool used[9];

void func(int idx){
    if(idx == N){
        for(int i=0;i<N;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    for(int i=1;i<=N;i++){
        if(used[i] == true) continue;

        used[i] = true;
        arr[idx] = i;
        func(idx+1);
        used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    func(0);

    return 0;
}