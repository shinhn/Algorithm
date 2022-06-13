#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

char arr[5][5];
int cnt;
char ch;

vector<int> where(){
    vector<int> coord;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j] == ch){
                coord.push_back(i);
                coord.push_back(j);
                return coord;
            }
        }
    }

    return coord;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = 'A' + cnt;
            cnt++;
        }
    }

    cin >> ch;

    vector<int> coord = where();

    cout << coord[0] - 2 << "," << coord[1] - 2 << "\n";
    
    return 0;
}