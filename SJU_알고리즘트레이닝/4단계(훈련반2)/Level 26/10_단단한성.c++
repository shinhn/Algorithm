#include <iostream>
using namespace std;

int castle[4][4] = {
    {0,0,0,0},
    {0,1,1,0},
    {2,2,3,0},
    {1,3,3,1}
};

int main(){
    
    for(int j=0;j<4;j++){
        int before = castle[0][j];
        for(int i=1;i<4;i++){
            if(before <= castle[i][j]) before = castle[i][j];
            else {
                cout << "안전하지않은성";
                return 0;
            }
        }
    }

    cout << "안전한성";

    return 0;
}