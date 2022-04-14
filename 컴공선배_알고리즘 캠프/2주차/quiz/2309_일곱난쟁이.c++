#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> tall;
    int total=0;
    
    for(int i=0;i<9;i++){
        int tmp;
        cin >> tmp;
        tall.push_back(tmp);
        total += tmp;
    }

    for (int i = 0; i < 9-1; i++){
        total -= tall[i];

        for (int j = i+1; j < 9; j++){
            total -= tall[j];

            if(total == 100){
                tall[j] = -1;
                tall[i] = -1;
                break;
            }

            total += tall[j];
        }

        total += tall[i];
    }

    sort(tall.begin(), tall.end());
    for (int i = 2; i < 9; i++){
        cout << tall[i] << "\n";
    }

    return 0;
}