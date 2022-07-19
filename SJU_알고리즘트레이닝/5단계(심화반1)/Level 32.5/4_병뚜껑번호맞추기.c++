#include <iostream>
using namespace std;

int arr[51], N;
int n;
string op;

int main(){

    cin >> N;

    fill(arr, arr+51, 1);

    for(int i=0;i<N;i++){
        cin >> n >> op;

        if(op == "DOWN"){
            if(arr[n-1] == 0){
                cout << "ERROR";
                return 0;
            }

            for(int j=n;j<=50;j++){
                arr[j] = 0;
            }
        }
        else{
            if(arr[n+1] == 0){
                cout << "ERROR";
                return 0;
            }

            for(int j=n;j>=1;j--){
                arr[j] = 0;
            }
        }
    }

    int s;
    for(int i=1;i<=50;i++){
        if(arr[i] == 1){
            s = i;
            break;
        }
    }

    int e;
    for(int i=50;i>=0;i--){
        if(arr[i] == 1){
            e = i;
            break;
        }
    }

    if(s != e) cout << s << " ~ " << e;
    else cout << s;

    return 0;
}