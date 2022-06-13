#include <iostream>

using namespace std;

int main(){

    int num[4],avg=0;
    
    for(int i=0;i<4;i++) {
        cin >> num[i];
        avg += num[i];
    }

    avg = avg/4;

    for(int i=0;i<4;i++) {
        if(num[i]>avg) cout << num[i] << ">" << avg << "\n";
        else if(num[i]<avg) cout << num[i] << "<" << avg << "\n";
        else cout << num[i] << "==" << avg << "\n";
    }

    


    return 0;
}