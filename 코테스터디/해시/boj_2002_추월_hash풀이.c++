#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int N, cnt, ans;
map<string, int> in; // 차 이름, 들어간 순서

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=0;i<N;i++){
        string car;
        cin >> car;
        in[car] = i;
    }

    vector<string> out(N);
    for(int i=0;i<N;i++){
        cin >> out[i];
    }

    for(int i=0;i<N;i++){
        string car = out[i]; // 지금 나오는 차가

        for(int j=i+1;j<N;j++){
            string car2 = out[j]; // 나중에 나올 차들보다
            if(in[car] > in[car2]){ // 들어간 순서가 크면 추월한 것
                ans ++;
                break;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}