#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arr[2][6] = {
      {'A','7','9','T','K','Q'},
      {'M','I','N','C','O','D'}  
    };
    
    char ch1, ch2;
    bool c1=false, c2=false;
    cin >> ch1 >> ch2;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(arr[i][j] == ch1) c1 = true;
            if(arr[i][j] == ch2) c2 = true;
        }
    }
    
    if(c1 == true) cout << ch1 << " : 존재" << "\n";
    else cout << ch1 << " : 없음" << "\n";
    
    if(c2 == true) cout << ch2 << " : 존재" << "\n";
    else cout << ch2 << " : 없음" << "\n";
    
    return 0;
}