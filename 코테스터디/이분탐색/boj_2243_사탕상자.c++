#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, A, B, C;
vector<int> box;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while(N--){
        cin >> A >> B;

        if(A == 2){ // 사탕 넣음
            cin >> C;

            if(C > 0){
                for(int i=0;i<C;i++){
                    box.push_back(B);
                }
            }
            else{

            }
        }
        else{ // 사탕 뺌

        }

        for(int i=0;i<box.size();i++){
            cout << box[i] << " ";
        }
        cout << "\n";


    }

    return 0;
}