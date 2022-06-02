#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M, K; // 전구개수 : N , 버튼개수 : M , 버튼 하나당 연결된 전구수 : K
int status[31], init_status[31];
bool connect[19][9]; // [버튼][전구]

bool All_light(){
    for(int i=1;i<=N;i++){
        if(status[i] == 0) return false;
    }

    return true;
}

bool Same_init(){
    for(int i=1;i<=N;i++){
        if(status[i] != init_status[i]) return false;
    }

    return true;
}

void dfs(int order){
    if(order > 1 && Same_init()) return; // 초기와 같은 상태라면 무한루프
    if(All_light()){
        cout << order << "\n";
        return;
    }

    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            if(connect[i][j] == true) {
                if(status[j] == 0) status[j] = 1;
                else status[j] = 0;
            }
        }

        cout << "order : " << order << "\n";
        for(int k=1;k<=N;k++){
            cout << status[k] << " ";
        }
        cout << "\n";

        dfs(order+1);

        for(int j=1;j<=N;j++){
            if(connect[i][j] == true) {
                if(status[j] == 0) status[j] = 1;
                else status[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;

    for(int i=1;i<=N;i++){
        cin >> status[i];
        init_status[i] = status[i];
    }

    for(int i=1;i<=M;i++){
        for(int j=0;j<K;j++){
            int light;
            cin >> light;
            connect[i][light] = true;
        }
    }

    dfs(1);

    return 0;
}