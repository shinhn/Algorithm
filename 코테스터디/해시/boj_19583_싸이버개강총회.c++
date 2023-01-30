#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, int> member; // 이름, 기록 (1 : 입장 확인, 2 : 퇴장 확인 - 출석 완료)
string S, E, Q;
int s,e,q;
string t, n;
int ans;

int getTime(string time){
    int ans;
    string tmpH = "", tmpM = "";
    tmpH += time[0];
    tmpH += time[1];
    tmpM += time[3];
    tmpM += time[4];

    return stoi(tmpH)*60 + stoi(tmpM);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> S >> E >> Q;

    s = getTime(S);
    e = getTime(E);
    q = getTime(Q);

    while(cin >> t >> n){
        int t2 = getTime(t);
        if(t2 <= s){
            member.insert({n,1});
        }
        if(t2 >= e && t2 <= q){
            if(member.find(n) != member.end()){ // map에 n 키값이 있을 경우
                member[n] = 2;
            }
        }
    }

    for(auto i : member){
        if(i.second == 2) ans ++;
    }

    cout << ans << "\n";

    return 0;
}