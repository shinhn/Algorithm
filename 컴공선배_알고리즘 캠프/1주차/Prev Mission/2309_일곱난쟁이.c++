#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> talls; // 9명의 난쟁이 키

int main(){
    int sum = 0;
    for(int i=0;i<9;i++){
        int tall;
        cin >> tall;
        talls.push_back(tall);
        sum += tall;
    }

    for(int i=0;i<9-1;i++){
        sum -= talls[i];

        for(int j=i+1;j<9;j++){
            sum -= talls[j];

            if(sum == 100){
                talls[j] = -1;
                talls[i] = -1;
                break;
            }

            sum += talls[j];
        }

        sum += talls[i];
    }

    sort(talls.begin(), talls.end());

    for(int i=2;i<9;i++){
        cout << talls[i] << "\n";
    }

    return 0;
}