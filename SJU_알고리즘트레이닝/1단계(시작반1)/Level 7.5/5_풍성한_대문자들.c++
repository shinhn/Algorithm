#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[3];
int cnt;

int main(){
    for(int i=0;i<3;i++){
        cin >> arr[i];
        if(arr[i]>='A' && arr[i]<='Z') cnt++;
    }

    if(cnt==3) cout << "풍족하다";
    else if(cnt>=1 && cnt<=2) cout << "적절하다";
    else if(cnt==0) cout << "부족하다";

    return 0;
}