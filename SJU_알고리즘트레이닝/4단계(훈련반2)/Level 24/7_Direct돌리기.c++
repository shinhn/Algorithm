#include <iostream>
#include <string>
using namespace std;

string arr[3][3] = {
    {"BHC", "BBQ", "KFC"},
    {"MC","7AVE","PAPA"},
    {"DHC","OBS","MOMS"}
};

int y,x;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,-1,0,1};

string ans;

int main(){
    
    cin >> y >> x;

    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny >= 0 && ny < 3 && nx >= 0 && nx < 3){
             ans += arr[ny][nx];
        }
    }

    cout << ans;

    return 0;
}