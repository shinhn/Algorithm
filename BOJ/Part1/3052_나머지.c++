#include <iostream>

using namespace std;

int main(){

    int num, arr[42], sum=0;

    fill_n(arr,42,0);

    for(int i=0;i<10;i++){
        cin >> num;
        arr[num % 42] = 1;
    }

    for(int i=0;i<42;i++){
        if(arr[i]==1) sum++;
    }

    cout << sum << endl;
    

    return 0;
}

