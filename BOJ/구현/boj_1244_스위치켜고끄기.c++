#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, n;
int sw[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> sw[i];
    }

    cin >> n;
    for(int i=0;i<n;i++){
        int gender, num;
        cin >> gender >> num;

        if(gender == 1){ // 남학생
            for(int j=1;j*num<=N;j++){
                if(sw[j*num] == 0) sw[j*num] = 1;
                else sw[j*num] = 0;
            }
        }
        else{ // 여학생
            if(sw[num] == 0) sw[num] = 1;
            else sw[num] = 0;

            for(int j=1;num-j>=1 && num+j<=N;j++){
                if(sw[num-j] == sw[num+j]){
                    if(sw[num-j] == 0) {
                        sw[num-j] = 1;
                        sw[num+j] = 1;
                    }
                    else {
                        sw[num-j] = 0;
                        sw[num+j] = 0;
                    }
                }
                else break;
            }
        }
    }

    for(int i=1;i<=N;i++){
        cout << sw[i] << " ";
        if(i % 20 == 0)cout << '\n';
    }


    return 0;
}