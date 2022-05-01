#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int map[11][11];
int paper[6]; // 사용한 색종이 수 카운트
int ans = 26;

bool is_possible(int y, int x, int size){
    if(paper[size]==5) return false;
    if(y+size>11 || x+size>11) return false; // 12부터 안되는 거 - 주의

    for(int i=y;i<y+size;i++){
        for(int j=x;j<x+size;j++){
            if(map[i][j]==0) return false;
        }
    }

    return true;
}

void DFS(int y, int x){
    if(x==11){ // x로 끝까지 갔으므로 아래줄 맨 외쪽부터 다시 탐색
        DFS(y+1,0);
        return;
    }
    if(y==11){ // x:11, y:10에서 넘어옴 => 끝까지 도달
        int total_paper = 0;
        for(int i = 1;i<=5;i++){
            total_paper += paper[i];
        }

        ans = min(ans, total_paper);
        return;
    }
    if(map[y][x]==0) { // 붙일 수 없는 칸이므로 다음 오른쪽 칸으로 이동
        DFS(y,x+1);
        return;
    }

    for(int size = 1;size<=5;size++){
        if(is_possible(y,x,size)){ // ixi로 붙일 수 있는 크기인지 판단
            // 1. 색종이 붙임 (붙인 곳은 다음에 또 붙일 수 없으므로 0으로 만들어주면됨)
            for(int j=y;j<y+size;j++){
                for(int k=x;k<x+size;k++){
                    map[j][k] = 0;
                }
            }
            paper[size] ++; // 2. 붙인 색종이 카운트

            DFS(y, x+1); // 3. 다음 오른쪽 칸으로 이동

            // 초기화
            for(int j=y;j<y+size;j++){
                for(int k=x;k<x+size;k++){
                    map[j][k] = 1;
                }
            }
            paper[size] --;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin >> map[i][j];
        }
    }

    DFS(0,0);

    if(ans <= 25) cout << ans << "\n";
    else cout << "-1" << "\n";
    

    return 0;
}