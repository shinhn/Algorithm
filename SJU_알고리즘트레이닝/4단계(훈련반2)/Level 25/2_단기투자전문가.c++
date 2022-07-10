#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        
        size_t start = arr[i].find("[");
        if(start == string::npos) continue;

        size_t end = arr[i].find("]");
        if(end == string::npos) continue;

        if(end - start - 1 == 5) {
            for(int j=start;j<=end;j++){
                cout << arr[i][j];
            }
            cout << "\n";
        }

        while(start != string::npos){
            start = arr[i].find("[", start+1);
            end = arr[i].find("]", end+1);

            if(end - start - 1 == 5) {
                for(int j=start;j<=end;j++){
                    cout << arr[i][j];
                }
                cout << "\n";
            }
        }

    }
    

    return 0;
}