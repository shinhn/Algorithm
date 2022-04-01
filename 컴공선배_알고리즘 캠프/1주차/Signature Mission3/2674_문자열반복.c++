#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    
    for(int i=0;i<T;i++){
        int R;
        string S;
        cin >> R >> S;

        for(int j=0;j<S.length();j++){
            for(int k=0;k<R;k++){
                cout << S[j];
            }
        }
        cout << "\n";
    }

    return 0;
}