#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c, result; 
    cin >> a >> b >> c; 
    result = a*b*c;

    for(int i=0;i<10;i++){
        int tmp = result;
        int cnt=0;
        while(tmp!=0){
            if(tmp%10==i)cnt++;
            tmp = tmp/10;
        }
        cout << cnt << "\n";
    }

    return 0;
}