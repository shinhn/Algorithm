#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

bool cmp(string s1, string s2){
    if(s1.length() != s2.length()){
        return s1.length() < s2.length();
    }
    else{
        return s1 < s2;
    }
}

int main(){

    cin >> N;
    string arr[N];
    
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    sort(arr, arr+N, cmp);

    for(int i=0;i<N;i++){
        cout << arr[i] << "\n";
    }

    return 0;
}