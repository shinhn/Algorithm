#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char map[5][3] = {
    {'_','_','_'},
    {'_','_','_'},
    {'A','T','K'},
    {'_','_','_'},
    {'_','_','_'}
};

int ya = 2, xa = 0, yt = 2, xt = 1, yk = 2, xk = 2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<7;i++){
        char m;
        string op;
        cin >> m >> op;

        if(op == "UP"){
            if(m == 'A'){
                if(ya-1>=0){
                    map[ya-1][xa] = 'A';
                    map[ya][xa] = '_';
                    ya--;
                }
            }
            if(m == 'T'){
                if(yt-1>=0){
                    map[yt-1][xt] = 'T';
                    map[yt][xt] = '_';
                    yt--;
                }
            }
            if(m == 'K'){
                if(yk-1>=0){
                    map[yk-1][xk] = 'K';
                    map[yk][xk] = '_';
                    yk--;
                }
            }
        }
        if(op == "DOWN"){
            if(m == 'A'){
                if(ya+1<5){
                    map[ya+1][xa] = 'A';
                    map[ya][xa] = '_';
                    ya++;
                }
            }
            if(m == 'T'){
                if(yt+1<5){
                    map[yt+1][xt] = 'T';
                    map[yt][xt] = '_';
                    yt++;
                }
            }
            if(m == 'K'){
                if(yk+1<5){
                    map[yk+1][xk] = 'K';
                    map[yk][xk] = '_';
                    yk++;
                }
            }
        }
        if(op == "LEFT"){
            if(m == 'A'){
                if(xa-1>=0){
                    map[ya][xa-1] = 'A';
                    map[ya][xa] = '_';
                    xa--;
                }
            }
            if(m == 'T'){
                if(xt-1>=0){
                    map[yt][xt-1] = 'T';
                    map[yt][xt] = '_';
                    xt--;
                }
            }
            if(m == 'K'){
                if(xk-1>=0){
                    map[yk][xk-1] = 'K';
                    map[yk][xk] = '_';
                    xk--;
                }
            }
        }
        if(op == "RIGHT"){
            if(m == 'A'){
                if(xa+1<5){
                    map[ya][xa+1] = 'A';
                    map[ya][xa] = '_';
                    xa++;
                }
            }
            if(m == 'T'){
                if(xt+1<5){
                    map[yt][xt+1] = 'T';
                    map[yt][xt] = '_';
                    xt++;
                }
            }
            if(m == 'K'){
                if(xk+1<5){
                    map[yk][xk+1] = 'K';
                    map[yk][xk] = '_';
                    xk++;
                }
            }
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout << map[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}