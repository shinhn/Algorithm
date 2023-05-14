#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M, R;
int arr[301][301];

void print(){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> R;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<R;i++){
        for(int start = 1;start <= min(N,M)/2 + min(N,M)%2;start++){
            int y = start, x = start;
            int pre = arr[y][x], next;

            while(y+1 <= N - start + 1){
                next = arr[y+1][x];
                arr[y+1][x] = pre;
                pre = next;
                y++;
            }

            while(x+1 <= M - start + 1){
                next = arr[y][x+1];
                arr[y][x+1] = pre;
                pre = next;
                x++;
            }

            while(y-1 >= start){
                next = arr[y-1][x];
                arr[y-1][x] = pre;
                pre = next;
                y--;
            }

            while(x-1 >= start){
                next = arr[y][x-1];
                arr[y][x-1] = pre;
                pre = next;
                x--;
            }
        }
    }

    print();

    return 0;
}