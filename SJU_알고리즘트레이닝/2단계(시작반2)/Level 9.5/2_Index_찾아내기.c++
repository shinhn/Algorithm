#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[5];
int cnt;
vector<int> idx;

int main(){

    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        if(arr[i] == 'A'){
            cnt++;
            idx.push_back(i);
        }
    }

    cout << "문자A는 " << cnt << "개발견\n";
    for(int i=0;i<idx.size();i++){
        cout << idx[i] << "번\n";
    }

    return 0;
}