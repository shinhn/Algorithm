#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int lotto[14];
int ans[6];
int num;

void DFS(int start, int depth){
    if(depth == 6){
        for(int i=0;i<6;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start;i<num;i++){
        ans[depth] = lotto[i];
        DFS(i+1, depth+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> num;
        if(num == 0) break;

        for(int i=0;i<num;i++){
            cin >> lotto[i];
        }

        DFS(0,0);
        cout << "\n";
    }

    return 0;
}