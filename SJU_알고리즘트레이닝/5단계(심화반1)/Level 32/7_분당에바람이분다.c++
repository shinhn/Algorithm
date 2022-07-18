#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> map[3][3];
int N, M;

void print(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<map[i][j].size();k++){
                cout << map[i][j][k];
            }
            cout << " ";
        }
        cout << "\n";
    }
}

int main(){

    cin >> N;
    while(N--){
        int y, x;
        string str;

        cin >> y >> x >> str;

        for(int i=0;i<str.length();i++){
            map[y][x].push_back(int(str[i]-'0'));
        }
    }

    cin >> M;
    while(M--){
        int wind;
        cin >> wind;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(map[i][j].empty()) continue;

                int sz = map[i][j].size()-1;

                if(map[i][j][sz] <= wind){
                    map[i][j].pop_back();
                }
                else{
                    map[i][j][sz] -= wind;
                }
            }
        }
    }

    

    int ans = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ans += map[i][j].size();
        }
    }

    cout << ans;

    return 0;
}