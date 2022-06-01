#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M;
vector<int> num;

void dice1(int depth){ // 모든 경우
    if(depth == N){
        for(int i=0;i<num.size();i++){
            cout << num[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=1;i<=6;i++){
        num.push_back(i);
        dice1(depth+1);
        num.pop_back();
    }
}

void dice2(int depth){ // 중복이 되는 경우를 제외하고 나올 수 있는 모든 경우
    if(depth == N){
        for(int i=0;i<num.size();i++){
            cout << num[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=1;i<=6;i++){
        if(num.size()>=1 && num.back() > i) continue; // 이전에 넣은 값보다 큰 값들만 넣어야 중복 되는 경우를 제거할 수 있음
        num.push_back(i);
        dice2(depth+1);
        num.pop_back();
    }
}

bool visited[7];
void dice3(int depth){ // 모두 다른 수가 나올 수 있는 모든 경우
    if(depth == N){
        for(int i=0;i<num.size();i++){
            cout << num[i] << " ";
        }
        cout << "\n";

        return;
    }

    for(int i=1;i<=6;i++){
        if(visited[i] == true) continue; // 이미 넣은 수는 넣지 않음
        num.push_back(i);
        visited[i] = true;
        dice3(depth+1);
        num.pop_back();
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    if(M == 1){
        dice1(0);
    }
    if(M == 2){
        dice2(0);
    }
    if(M == 3){
        dice3(0);
    }

    return 0;
}