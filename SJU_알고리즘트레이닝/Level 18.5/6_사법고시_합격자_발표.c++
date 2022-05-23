#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int win[2][3] = {{3,5,1},{4,2,6}};
int people[4];

bool isExist(int num){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(num == win[i][j]) return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<4;i++){
        cin >> people[i];
    }

    for(int i=0;i<4;i++){
        if(isExist(people[i])) cout << people[i] << "번 합격\n"; 
        else cout << people[i] << "번 불합격\n"; 
    }

    return 0;
}