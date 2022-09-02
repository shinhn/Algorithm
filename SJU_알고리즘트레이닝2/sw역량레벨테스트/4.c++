#include <iostream>
using namespace std;

int A, B, C; // 방의 정원
int N; // 전체 학생 수

int main(){
    cin >> A >> B >> C >> N;

    for(int a=0;a<=50;a++){
        for(int b=0;b<=50;b++){
            for(int c=0;c<=50;c++){
                if(a*A + b*B + c*C == N){
                    cout << 1;
                    return 0;
                }
            }
        }
    }

    cout << 0;
    return 0;
}