#include <iostream>
#include <vector>
using namespace std;

int n, cnt;
vector<string> str;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        str.push_back(tmp);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(str[i] + str[j] + str[k] + str[l] == "CHRISTMAS") cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}