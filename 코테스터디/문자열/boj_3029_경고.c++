#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string t1, t2;
int sec1, sec2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t1 >> t2;

    sec1 += (int(t1[0]-'0')*10 + int(t1[1]-'0')) * 60 * 60;
    sec1 += (int(t1[3]-'0')*10 + int(t1[4]-'0')) * 60;
    sec1 += (int(t1[6]-'0')*10 + int(t1[7]-'0'));

    sec2 += (int(t2[0]-'0')*10 + int(t2[1]-'0')) * 60 * 60;
    sec2 += (int(t2[3]-'0')*10 + int(t2[4]-'0')) * 60;
    sec2 += (int(t2[6]-'0')*10 + int(t2[7]-'0'));

    if(sec2 < sec1) sec2 += 24*60*60;

    int ans = sec2 - sec1;

    if(ans == 0){ // 기다리는 시간의 범위는 1초 ~ 24시간이라고 했으므로 현재시간과 던질시간이 같을 경우 "24:00:00" 출력
        cout << "24:00:00" << "\n";
        return 0;
    }

    int h,m,s;

    h = ans/3600;
    ans = ans%3600;

    m = ans/60;
    ans = ans%60;

    s = ans;

    if(h<10) cout << 0 << h;
    else cout << h;
    cout << ':';

    if(m<10) cout << 0 << m;
    else cout << m;
    cout << ':';

    if(s<10) cout << 0 << s << "\n";
    else cout << s << "\n";

    return 0;
}